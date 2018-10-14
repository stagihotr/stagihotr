exports.command_wrapper = function (CDS_COMMAND) {
    //carregar definicoes do protocolo
    var protocol_def = require('./protocol-definition-file.js');

    //passo1: verificar o tamanho do comando. 
    var TAM = String(CDS_COMMAND).length;
    
    //Segundo o Protocolo do TS01, o comando possui 75 caracteres (0~74);  
    if(TAM==protocol_def.command_length() ){
        //passo2: verificar o conteudo do comando.

        //Quebrar o comando no caracter 43, em duas partes 1 e 2.
        var data_part = String(CDS_COMMAND).substr(0, 
            ( protocol_def.command_length() - protocol_def.content_validation_length() )
        );
        var content_validation = String(CDS_COMMAND).substr(protocol_def.content_validation_index() ,protocol_def.content_validation_length() );
    
        //Rodar MD5 na parte 1
        var crypto = require('crypto');
        var md5_part1 = crypto.createHash('md5').update(data_part).digest('hex');
        
        //Comparar com a parte2;
        if(md5_part1==content_validation){

            //Sucesso nas verificacoes
            return protocol_def.command_wrapper_no_error();

        }
        return protocol_def.command_wrapper_content_error();

    }

    return protocol_def.command_wrapper_length_error();
}

exports.show_command_html = function (CDS_COMMAND) {
    //carregar definicoes do protocolo
    var protocol_def = require('./protocol-definition-file.js');
    
    //verificar comando
    var e = this.command_wrapper(CDS_COMMAND);

    //se comando livre de erros
    if(e==protocol_def.command_wrapper_no_error()){

    //passo3: quebrar o comando nos tipos de informacao, conforme definido no protocolo.
    var pacient = protocol_def.default_pacient();

    var header = String(CDS_COMMAND).substr(protocol_def.header_index() ,protocol_def.header_length() );

    var topic = String(CDS_COMMAND).substr(protocol_def.topic_index() ,protocol_def.topic_length() );

    var from = String(CDS_COMMAND).substr(protocol_def.from_index() ,protocol_def.from_length() );

    var to = String(CDS_COMMAND).substr(protocol_def.to_index() ,protocol_def.to_length() );

    var type = String(CDS_COMMAND).substr(protocol_def.type_index() ,protocol_def.type_length() );

    var intensity = String(CDS_COMMAND).substr(protocol_def.intensity_index() ,protocol_def.intensity_length() );

    var complementary_info = String(CDS_COMMAND).substr(protocol_def.complementary_info_index() ,protocol_def.complementary_info_length() );

    var reserved = String(CDS_COMMAND).substr(protocol_def.reserved_index() ,protocol_def.reserved_length() );

    var status = String(CDS_COMMAND).substr(protocol_def.status_index() ,protocol_def.status_length() );

    var timestamp = String(CDS_COMMAND).substr(protocol_def.timestamp_index() ,protocol_def.timestamp_length() );

    var content_validation = String(CDS_COMMAND).substr(protocol_def.content_validation_index() ,protocol_def.content_validation_length() );


    //Exibe informacoes
    return '<table style="width:100%">'
    +'<tr>'
        +'<td> pacient </td>'
        +'<td> header </td>'
        +'<td> topic </td>'
        +'<td> from </td>'
        +'<td> to </td>'
        +'<td> type </td>'
        +'<td> intensity </td>'
        +'<td> complementary_info </td>'
        +'<td> reserved </td>'
        +'<td> status </td>'
        +'<td> timestamp </td>'
        +'<td> content_validation </td>'
    +'</tr>'
    +'<tr>'
        +'<td>'+pacient+'</td>'
        +'<td>'+header+'</td>'
        +'<td>'+topic+'</td>'
        +'<td>'+from+'</td>'
        +'<td>'+to+'</td>'
        +'<td>'+type+'</td>'
        +'<td>'+intensity+'</td>'
        +'<td>'+complementary_info+'</td>'
        +'<td>'+reserved+'</td>'
        +'<td>'+status+'</td>'
        +'<td>'+timestamp+'</td>'
        +'<td>'+content_validation+'</td>'
    +'</tr>'
    +'</table>';
    }

    return 'COMMAND_ERROR TYPE: '+e;
}