'use strict'

const protocol = require('./protocol.js');

class Command {

  constructor(command) {
    this.command = command;
  }

  validate() {
    console.log("command: " + this.command);

    console.log("command length: " + this.command.length);

    //passo1: verificar o tamanho do comando. 
    //segundo o Protocolo do TS01, o comando possui 75 caracteres (0~74);  
    if(this.command.length == protocol.command_length()) {
        //passo2: verificar o conteudo do comando.
        //Quebrar o comando no caracter 43, em duas partes 1 e 2.
        var data = this.command.substr(0, (protocol.command_length() - protocol.content_validation_length()));

        console.log("command data: " + data);

        var content_validation = this.command.substr(protocol.content_validation_index(), protocol.content_validation_length());

        console.log("md5: " + content_validation);

        //Rodar MD5 na parte 1
        var crypto = require('crypto');
        var md5 = crypto.createHash('md5').update(data).digest('hex');

        console.log("checksum: " + md5);
        
        //Comparar com a parte2;
        if(md5 == content_validation) {
            //Sucesso nas verificacoes
            return protocol.command_wrapper_no_error();
        }
    }

    return protocol.command_wrapper_length_error();
  }

  getHeader() {
    return this.command.substr(protocol.header_index(), protocol.header_length());
  }

  getTopic() {
    return this.command.substr(protocol.topic_index(), protocol.topic_length());
  }

  getSender() {
    return this.command.substr(protocol.from_index(), protocol.from_length());
  }

  getReceiver() {
    return this.command.substr(protocol.to_index(), protocol.to_length());
  }

  getType() {
    return this.command.substr(protocol.type_index(), protocol.type_length());
  }

  getIntensity() {
    return this.command.substr(protocol.intensity_index(), protocol.intensity_length());
  }

  getComplementaryInfo() {
    return this.command.substr(protocol.complementary_info_index(), protocol.complementary_info_length());
  }

  getReserved() {
    return this.command.substr(protocol.reserved_index(), protocol.reserved_length());
  }

  getStatus() {
    return this.command.substr(protocol.status_index(), protocol.status_length());
  }  

  getTimestamp() {
    return this.command.substr(protocol.timestamp_index(), protocol.timestamp_length());
  }

  getContentValidation() {
    return this.command.substr(protocol.content_validation_index(), protocol.content_validation_length());
  } 
}

module.exports = Command;