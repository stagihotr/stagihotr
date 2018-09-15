'use strict'

/*
 * export KAFKA="192.168.33.11" 
 * node main.js
 */

var kafka = require('kafka-node');
var request = require('request-promise');

const client = new kafka.Client(process.env.KAFKA || 'localhost'); // alterar endereço do Kafka conforme seu ambiente
const consumer = new kafka.Consumer(client, [{ topic: 'test', fromOffset: -1}]);

consumer.on('error', function (err) {
    console.log(err);
})

consumer.on('message', function (message) {
    console.log(message.value);

    request({
        method: 'POST',
        uri: 'http://192.168.33.11:3000/api/stagihotr.ita.br.SampleParticipant',
        body: {
            "$class": "stagihotr.ita.br.SampleParticipant",
            participantId: "1",
            firstName: "Prof. Adilson",
            lastName: "Cunha"
        },
        json: true
    }).then(function (body) {
        console.log(body);
    }).catch(function (err) {
        console.log(err);
    });
});


