// Fast html framework
var express = require('express');
var app = express();
 

// For receiving JSON in posts
var bodyParser = require('body-parser');
var jsonParser = bodyParser.json()
var urlencodedParser = bodyParser.urlencoded({ extended: false })
 
// For the database
var sqlite3 = require('sqlite3');
var db = new sqlite3.Database('./db/STAGIHO.TR');

//var move = new movement_repository(db);


//criar a tabela caso nao exista
/*
db.serialize(() => {
    // Queries scheduled here will be serialized.
    move.createTable();
    /*  
    move.insert(pacient, header, topic, sender, receiver, type, intensity,
          complementary_info, reserved, status, timestamp, content_validation);
      */

          /*
          db.each(move.getAll(), [], (err, row) => {
              if (err) {
                throw err;
              }
              console.log(`${row.id} ${row.pacient} - ${row.content_validation}`);
            });
          */  
//  });


// Add restful controller
require('./MovementController')(app, db, jsonParser);
 
// Serve static files
app.use(express.static('wwwroot'))

app.listen(6969);

var request = require('request-promise');
request({
    method: 'GET',
    uri: 'http://localhost:6969/Api/movements/create/movements/'
    
    
}).then(function (body) {
    console.log(body);
}).catch(function (err) {
    console.log(err);
});