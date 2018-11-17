'use strict'

var kafka = require("kafka-node");
var client = new kafka.Client(process.env.KAFKA || "localhost");  

process.on("SIGINT", function() {
  client.close(function() {
    process.exit();
  });
});

exports.go = (listen) => {
  var consumer = new kafka.Consumer(client, listen);
  var producer = require("./producer.js");

  consumer.on("message", function (message) {
    var Command = require("./command.js");
    var command = new Command(message.value);

    //testa se o comando enviado eh valido
    //filtra request e response
    if(command.validate() == 0) {
      console.log("command: " + command.getCommand() + " valid");      

      console.log(command.getSender() + " sent " + command.getType() + " to " + command.getReceiver());

      //pega quem enviou e direciona a mensagem para o local correto
      switch(command.getSender()) {
        case "CDS001": //STGHTRXXXXXXCDS001EXO001LF50450RN1542443892f2d3e281b44fa2dd82edbe3d589f10ee  request from cds to exo
          //TODO: INCLUIR TABELA DE FILTRO AQUI
          producer.send("TS2IN", command.getType());
        case "EXO001": //STGHTRXXXXXXEXO001CDS001OK50450RN154244389267fdf0c4b74a65bcea4e4df60b250a68 response from exo to cds
          producer.send("TS1OUT", command.getType());
      }

    } else {
      console.log("command: " + command.getCommand() + " invalid");      
    }
  });

  consumer.on("error", function (err) {
    console.log(err);
  });
}