const internetAvailable = require("internet-available");
const request = require('request-promise');

internetAvailable({
    //timeout: 4000,
    //retries: 10,
    domainName: "35.232.70.182:3000/explorer/",
    //port: 3000,
    //host: '35.232.70.182'
}).then(() => {
    console.log("Internet available");
    request({
        method: 'GET',
        uri: 'http://localhost:6969/Api/movements_by_1/' 
        
    }).then(function (body) {
        console.log(body);
        var jsonObject = JSON.parse(body);
        if(jsonObject.id!=undefined){
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

            request({
                method: 'POST',
                uri: 'http://35.232.70.182:3000/api/stagihotr.paciente.MovimentoParticipant',
                body: command_to_bc,
                json: true,
                resolveWithFullResponse: true
            }).then(function (body) {
                console.log(body.statusCode);

                //exclusao do comando no modulo de memoria
                request({
                    method: 'GET',
                    uri: 'http://localhost:6969/Api/movement/drop/'+jsonObject.id+'/' 
                    
                }).then(function (body) {
                    console.log(body);
                }).catch(function (err) {
                    console.log(err);
                });

            }).catch(function (err) {
                console.log(err);
            });    


        }

    }).catch(function (err) {
        console.log(err);
    });

}).catch(() => {
    console.log("No internet");
});
