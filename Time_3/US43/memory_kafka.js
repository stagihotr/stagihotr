'use strict'

/*
 * Codigo associado a atividade 2 da US43 
 * node main.js
 * // alterar endereço do Kafka conforme seu ambiente, neste caso localhost
 */

var kafka = require('kafka-node');
var request = require('request-promise');
var protocol_def = require('./protocol-definition-file.js');


const client = new kafka.Client(process.env.KAFKA || 'localhost'); 
const consumer = new kafka.Consumer(client, [{ topic: 'Rasp', fromOffset: -1}]);

consumer.on('error', function (err) {
    console.log(err);
})

consumer.on('message', function (message) {
    console.log(message.value);

    request({
        method: 'GET',
        uri: 'http://localhost:6969/Api/movement/new/'+protocol_def.default_pacient()+'/'+message.value+'/'
        
    }).then(function (body) {
        console.log(body);
    }).catch(function (err) {
        console.log(err);
    });
});