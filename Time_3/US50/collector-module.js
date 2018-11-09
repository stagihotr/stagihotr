const isOnline = require('is-online');
const internetAvailable = require("internet-available");
const request = require('request-promise');
 


function run_collector(i) {
    
        isOnline({
            // Break on 5 seconds
            timeout: 5000,
            // v4 or v6
            version: "v4"
        }).then(online => {
            if(online){
                //verificar servidor kafka disponível?
                //verificar endpoint Blockchain disponivel?
                ///////////////////////////////
                internetAvailable({
                    domainName: "35.232.70.182:3000/explorer/",
                    
                }).then(() => {
                    console.log("Internet available");
                    //com internet e blockchain disponivel, recupera do M. de Memoria o registro mais antigo. 
                    request({
                        method: 'GET',
                        uri: 'http://localhost:6969/Api/movements_by_1/', 
                        resolveWithFullResponse:true
                    }).then(function (body) {
                        
                        console.log(body.statusCode);
                        
                        console.log(body.body);
                        
                        //garantir que eh valida a informacao do comando
                        if(body.statusCode==200 && body.body!=""){ 
                            var jsonObject = JSON.parse(body.body);
                        
                            if(jsonObject.id!=undefined){
                            
                            //montar  o comando no formato para enviar ao blockchain
                            console.log(jsonObject.id);
                            let isoDate = new Date(jsonObject.timestamp*1000).toISOString();
                            let obs = "intensity: "+jsonObject.intensity+" complementary_info: "+ jsonObject.complementary_info;
                
                            let command_to_bc = JSON.parse(`{
                                "$class": "stagihotr.paciente.MovimentoParticipant",
                                "movimentoId": "`+jsonObject.id+`",
                                "pacienteHash": "`+jsonObject.pacient+`",
                                "status": "`+jsonObject.status+`",
                                "movimento": "`+jsonObject.type+`",
                                "data": "`+isoDate+`",
                                "observacao": "`+obs+`"}`
                            );
                            
                            //enviar por POST ao Endpoint do Blockchain
                            request({
                                method: 'POST',
                                uri: 'http://35.232.70.182:3000/api/stagihotr.paciente.MovimentoParticipant',
                                body: command_to_bc,
                                json: true,
                                resolveWithFullResponse: true  //para garantir que o statusCode vira na resposta
                            }).then(function (body) {
                                console.log(body.statusCode);
                
                                //exclusao do comando no M. de Memoria
                                request({
                                    method: 'GET',
                                    uri: 'http://localhost:6969/Api/movement/drop/'+jsonObject.id+'/' 
                                    
                                }).then(function (body) {
                                    console.log(body);
                                    //run_collector(i++);

                                }).catch(function (err) {
                                    console.log(err);
                                });
                
                            }).catch(function (err) {
                                console.log(err);
                            });    
                
                
                        }//if
                        }//if
                
                    }).catch(function (err) {
                        console.log(err);
                    });
                
                }).catch(() => {
                    console.log("No internet");
                });





                
            }else{
                
                console.log("problems...problems...");
                
            }

            
        });
    
 
}

run_collector(0);

/*
REFERENCES

https://ourcodeworld.com/articles/read/454/how-to-check-if-there-is-an-active-internet-connection-in-node-js
https://stackoverflow.com/questions/45531690/how-to-create-an-infinite-loop-in-nodejs
https://stackoverflow.com/questions/34824460/why-does-a-while-loop-block-the-event-loop

*/



