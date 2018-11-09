const internetAvailable = require("internet-available");
const request = require('request-promise');

//  'STGHTR--TOP002--PNL004--EXO008--LF--5--045--0--RN--1542443892---d47531b30443453944f2528da721f835';
var command_example = 'STGHTRTOP002PNL004EXO008LF50450RN1542443892d47531b30443453944f2528da721f835';


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
        uri: 'http://localhost:6969/Api/movement/new/190/'+command_example+'/'
         
        
    }).then(function (body) {
        console.log(body);
    }).catch(function (err) {
        console.log(err);
    });

}).catch(() => {
    console.log("No internet");
});
