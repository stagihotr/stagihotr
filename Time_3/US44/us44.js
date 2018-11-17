//STGHTR--TOP002--PNL004--EXO008--LF--5--045--0--RN--1542443892---d47531b30443453944f2528da721f835
//STGHTRTOP002PNL004EXO008LF50450RN1542443892d47531b30443453944f2528da721f835
//STGHTRTOP002PNL004TS1OUTLF50450RN1542443892d47531b30443453944f2528da721f835


// TS1IN  --------------------------> TS2IN
// TS2OUT <-------------------------- TS2OUT

'use strict'

var controller = require("./src/controller.js");

var listen = [
  { topic: "TS1IN", fromOffset: -1}, 
  { topic: "TS2OUT", fromOffset: -1}
];

controller.go(listen);
