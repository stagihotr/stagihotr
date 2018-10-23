var validator = require('./../validators/movimentos'),
    blockchain = require('./../../services/blockchain'),
    influx = require('./../../services/influxdb');

async function cadastrar_movimento(req, res) {
    try {
        var errors = validator.validar_req_movimentos(req)
        if (errors) {
            res.status(errors.status || 500);
            res.json({ message: errors, success: false })
        } else {
            console.log("* ENVIANDO AO BLOCKCHAIN")
            const response = await blockchain.enviar_requisicao('stagihotr.paciente.MovimentoParticipant', req.body)
            if (response && response.data) {
                console.log("** RESPOSTA COM SUCESSO DO BLOCKCHAIN")
                console.log("*** ENVIANDO AO INFLUXDB")
                req.body.movimentoId = Number(req.body.movimentoId)
                await influx.salvar_influx("movimentos", req.body)
                console.log("**** RESPOSTA COM SUCESSO DO INFLUXDB")
            }
            res.status(201);
            res.json({ message: "Movimento cadastrado com sucesso!", success: true })
        }
    } catch (error) {
        console.log(error)
        res.status(500);
        res.json({ message: "Ocorreu um erro! Por favor tente novamente!", success: false })
    }
}

module.exports.cadastrar_movimento = cadastrar_movimento