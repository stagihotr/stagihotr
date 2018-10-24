// sudo docker run -d -p 8084:8083 influxdb
// influx -host 35.192.171.187 -username user_stagihotr -password 1234567890 -database stagihotr

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
            fields: data,
            timestamp: new Date().getTime(),
        }
    ], {
            database: db_name
        })

}

module.exports.salvar_influx = salvar_influx
