'use strict'

const kafka = require("kafka-node");
const client = new kafka.Client(process.env.KAFKA || "localhost");

process.on("SIGINT", function() {
  client.close(function() {
    process.exit();
  });
});

exports.cds = (cds, exo) => {
  const Command = require("./command.js");
  const consumer = new kafka.Consumer(client, [{ topic: cds, fromOffset: -1}]);
  const producer = require("./producer.js");

  consumer.on("message", function (message) {
    const command = new Command(message.value);

    //testa se o comando enviado eh valido
    if(command.validate() == 0) {
      console.log("comando validado");

      procucer.send(exo, "teste");
    }
  });

  consumer.on("error", function (err) {
    console.log(err);
  });
}