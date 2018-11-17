//STGHTRXXXXXXCDS001EXO001LF50450RN1542443892f2d3e281b44fa2dd82edbe3d589f10ee  request from cds to exo
//STGHTRXXXXXXEXO001CDS001OK50450RN154244389267fdf0c4b74a65bcea4e4df60b250a68 response from exo to cds

// TS1IN  --------------------------> TS2IN
// TS1OUT <-------------------------- TS2OUT

'use strict'

var controller = require("./src/controller.js");

var listen = [
  { topic: "TS1IN", fromOffset: -1}, 
  { topic: "TS2OUT", fromOffset: -1}
];

controller.go(listen);
