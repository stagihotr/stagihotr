'use strict'

/*
 * export KAFKA="192.168.33.10" 
 * node main.js
 */

var kafka = require('kafka-node');
var request = require('request-promise');

const client = new kafka.Client(process.env.KAFKA || 'localhost'); // alterar endereço do Kafka conforme seu ambiente
const consumer = new kafka.Consumer(client, [{ topic: 'TS3MEM', fromOffset: -1}]);

consumer.on('error', function (err) {
    console.log(err);
})

consumer.on('message', function (message) {
    console.log(message.value);
    var pacient = 1;
    var urinew = 'http:/'+ '/localhost:6969/api/movement/new/'+ pacient +'/'+ message.value+'/';

    request({
        method: 'GET',
        uri: urinew
    }).then(function (body) {
        console.log(body);
    }).catch(function (err) {
        console.log(err);
    });
});


