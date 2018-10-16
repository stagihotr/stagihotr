

var http = require('http');
var dt = require('./us43-module');

//  'STGHTR--TOP002--PNL004--EXO008--LF--5--045--0--RN--1542443892---d47531b30443453944f2528da721f835';
var command_example = 'STGHTRTOP002PNL004EXO008LF50450RN1542443892d47531b30443453944f2528da721f835';


http.createServer(function (req, res) {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.write("US43 Atividade 1 exemplo : " + dt.show_command_html(command_example));
    res.end();
}).listen(8080);