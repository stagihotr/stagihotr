const Influx = require('influx'),
    host = '35.192.171.187',
    port = 8086,
    username = 'user_stagihotr',
    password = '1234567890',
    db_name = 'stagihotr';


const influx = new Influx.InfluxDB(`http://${username}:${password}@${host}:${port}/${db_name}`)

async function salvar_influx(measurement, data) {
    return influx.writePoints([
        {
            measurement: measurement,
            tags: { "user": "stagihotr" },
            fields: data,
            timestamp: Math.floor(Date.now() / 1000),
        }
    ], {
            database: db_name
        })

}

module.exports.salvar_influx = salvar_influx
