var validator = require('./../validators/pacientes'),
    blockchain = require('./../../services/blockchain'),
    influx = require('./../../services/influxdb');

async function cadastrar_paciente(req, res) {
    try {
        var errors = validator.validar_req_pacientes(req)
        if (errors) {
            res.status(errors.status || 500);
            res.json({ message: errors, success: false })
        } else {
            console.log("* ENVIANDO AO BLOCKCHAIN")
            const response = await blockchain.enviar_requisicao('stagihotr.paciente.PacienteParticipant', req.body)
            if (response && response.data) {
                console.log("** RESPOSTA COM SUCESSO DO BLOCKCHAIN")
                console.log("*** ENVIANDO AO INFLUXDB")
                req.body.pacienteId = Number(req.body.pacienteId)
                await influx.salvar_influx("pacientes", req.body)
                console.log("**** RESPOSTA COM SUCESSO DO INFLUXDB")
            }
            res.status(201);
            res.json({ message: "Paciente cadastrado com sucesso!", success: true })
        }
    } catch (error) {
        console.log(error)
        res.status(500);
        res.json({ message: "Ocorreu um erro! Por favor tente novamente!", success: false })
    }
}

module.exports.cadastrar_paciente = cadastrar_paciente