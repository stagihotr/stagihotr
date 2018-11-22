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
  
  //semaforo (TABELA) responsavel em controlar o uso do Exo
  var semaphore = {  
    command:"",
    status: "RELEASE", 
    WAIT: "WAIT",
    RELEASE: "RELEASE",
    setCommad: function(command) {
      this.command = command;
    },
    getCommand: function() {
      return this.command;
    },
    setStatus: function(status) {
      this.status = status;
    },
    getStatus: function() {
      return this.status;
    }
  };

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
        case "CDS000": //STGHTR0TS1INCDS000EXO000LF50450RN1542443892ece6a945b2e7062b7e4c935078f3b89e  request from cds to exo

          //permite enviar mensagem para o Exo se o semaphore estiver RELEASE
          //grava o comando enviado no semaphore para armazena-lo posteriormente na memoria
          //assim que enviar a mensagem para o Exo o Controller coloca o semaphore no estado WAIT
          //e passa a bloquear mensagens enviadas pelo CDS, avisando o CDS no topico TS1OUT
          if(semaphore.getStatus() == semaphore.RELEASE) {
            semaphore.setCommad(command.getCommand());
            producer.send("TS2IN", command.getType());
            semaphore.setStatus(semaphore.WAIT);
          } else {
            producer.send("TS1OUT", "BLOCKED");            
          }

          break;
        case "EXO000": //STGHTRTS2OUTEXO000CDS000OK50450RN1542443892eae4c95522aefa84c7f530902723e797 response from exo to cds

          //se o resultado do comando enviado pelo Exo for OK o comando  
          //guardado no semaphore deve ser armazenado na memoria 
          if(command.getType() == "OK") {
            producer.send("TS3MEM", semaphore.getCommand());
          }

          //em seguida reporta o CDS e libera o Exo para que o CDS possa obter seu controle novamente
          producer.send("TS1OUT", command.getType());          
          semaphore.setStatus(semaphore.RELEASE);

          break;
      }
    } else {
      console.log("command: " + command.getCommand() + " invalid");      
    }
  });

  consumer.on("error", function (err) {
    console.log(err);
  });
}