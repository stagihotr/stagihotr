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
            levantar = "1"
            sentar = "2"
            andar = "3"
            voltar = "4"

            movimentos = {
                "levantar": levantar,
                "up": levantar,
                "get_up": levantar,
                "get up": levantar,
                "bring_up": levantar,
                "bring up": levantar,
                "rise": levantar,

                "sentar": sentar,
                "down": sentar,
                "sit": sentar,

                "andar": andar,
                "walk": andar,
                "go": andar,

                "voltar": voltar,
                "return": voltar,
                "back": voltar,
                "come_back": voltar,
                "come back": voltar
            }

            nao_concluido = "0"
            concluido = "1"
            st = {
                "nao_concluido": nao_concluido,
                "nao concluido": nao_concluido,
                "not completed": nao_concluido,
                "not_ok": nao_concluido,
                "not": nao_concluido,
                "false": nao_concluido,
                "not_done": nao_concluido,
                "not done": nao_concluido,
                "0": nao_concluido,

                "concluido": concluido,
                "completed": concluido,
                "ok": concluido,
                "true": concluido,
                "done": concluido,
                "1": concluido
            }

            const movimento = movimentos[req.body.movimento.toLowerCase()]
            const status = st[req.body.status.toLowerCase()]

            if (!movimento) {
                res.status(400);
                res.json({ message: "Movimento não encontrado!", success: false })
                return
            }
            if (!status) {
                res.status(400);
                res.json({ message: "Status não encontrado!", success: false })
                return
            }
            console.log("* ENVIANDO AO BLOCKCHAIN")

            const response = await blockchain.enviar_requisicao('stagihotr.paciente.MovimentoParticipant', req.body)
            if (response && response.data) {
                console.log("** RESPOSTA COM SUCESSO DO BLOCKCHAIN")
                console.log("*** ENVIANDO AO INFLUXDB")
                body = {
                    time: new Date(req.body.data).getTime(),
                    movimento: movimento,
                    paciente: req.body.pacienteHash,
                    status: status
                }
                await influx.salvar_influx("movimento", body)
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