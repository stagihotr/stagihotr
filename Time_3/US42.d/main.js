'use strict'

/*
 * export KAFKA="192.168.33.10" 
 * node main.js
 */

var kafka = require('kafka-node');
var request = require('request-promise');

const client = new kafka.Client(process.env.KAFKA || 'localhost'); // alterar endereço do Kafka conforme seu ambiente
const consumer = new kafka.Consumer(client, [{ topic: 'exoesqueleto', fromOffset: -1}]);

consumer.on('error', function (err) {
    console.log(err);
})

consumer.on('message', function (message) {
    console.log(message.value);

    request({
        method: 'POST',
        uri: 'http://192.168.33.10:3000/api/stagihotr.paciente.MovimentoParticipant',
        body: JSON.parse(message.value),
        json: true
    }).then(function (body) {
        console.log(body);
    }).catch(function (err) {
        console.log(err);
    });
});


