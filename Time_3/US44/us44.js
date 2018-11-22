//STGHTR0TS1INCDS000EXO000LF50450RN1542443892f2d3e281b44fa2dd82edbe3d589f10ee  request from cds to exo
//STGHTRTS2OUTEXO000CDS000OK50450RN154244389267fdf0c4b74a65bcea4e4df60b250a68 response from exo to cds

//  TS1IN -------------------------->  TS2IN
// TS1OUT <-------------------------- TS2OUT

'use strict'

var controller = require("./src/controller.js");

//topicos que o controller fica escutando do CDS (TS1IN) e do Exo (TS2OUT)
var listen = [
  { topic: "TS1IN", fromOffset: -1}, 
  { topic: "TS2OUT", fromOffset: -1}
];

controller.go(listen);
