const Influx = require('influx')


const host = '35.192.171.187'
const port = 8086
const username = 'user_stagihotr'
const password = '1234567890'
const db_name = 'stagihotr'


const influx = new Influx.InfluxDB(`http://${username}:${password}@${host}:${port}/${db_name}`)

influx.writePoints([
    {
        measurement: 'movimentos',
        tags: { "user": "stagihotr" },
        fields: {
            "movimentoId": Number('4480'),
            "pacienteHash": '5ac671ab1d364330a6394252e74ec36f',
            "status": 'done',
            "movimento": 'levantar',
            "data": '2018-10-22T20:15',
            "observacao": 'está quase sozinho'
        },
        timestamp: Math.floor(Date.now() / 1000),
    }
], {
        database: db_name
    })

