//STGHTR--TOP002--PNL004--EXO008--LF--5--045--0--RN--1542443892---d47531b30443453944f2528da721f835
//STGHTRTOP002PNL004EXO008LF50450RN1542443892d47531b30443453944f2528da721f835

'use strict'

var kafka = require('kafka-node');
var Command = require('./src/command.js')

const client = new kafka.Client(process.env.KAFKA || 'localhost'); 
const consumer = new kafka.Consumer(client, [{ topic: 'CDS', fromOffset: -1}]);

consumer.on('error', function (err) {
  console.log(err);
})

consumer.on('message', function (message) {

  var command = new Command(message.value);

  //testa se o comando enviado eh valido
  if(command.validate() == 0) {
  	console.log('comando validado');

  	//TO-DO - TO BE CONTINUE
  }

});