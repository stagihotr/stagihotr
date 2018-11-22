// Import net module.
var net = require('net');

var cli = require('./tcp_socket_client');

// Create a java client socket.
var javaClient = cli.getConn('Java');

javaClient.write('Java is best programming language. ');
