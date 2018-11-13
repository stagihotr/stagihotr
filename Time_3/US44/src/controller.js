'use strict'

var kafka = require('kafka-node');
var client = new kafka.Client(process.env.KAFKA || 'localhost');

class Controller {
  
  cds(cds, exo) {
    var Command = require('./command.js')
    var consumer = new kafka.Consumer(client, [{ topic: cds, fromOffset: -1}]);

    consumer.on('message', function (message) {
      var command = new Command(message.value);

      //testa se o comando enviado eh valido
      if(command.validate() == 0) {
        console.log('comando validado');

        var producer = new kafka.Producer(client);

        var payload = [{
          topic: exo,
          messages: command.getType()
        }];    

        producer.send(payload, function (err, data) {
          if (err) {
            console.log(err);
          }
        });

      }
    });

    consumer.on('error', function (err) {
      console.log(err);
    });
  }
}

module.exports = Controller;