/**
 * CREATE TABLE IF NOT EXISTS movements (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        pacient INTEGER,
        header TEXT,
        topic TEXT,
        sender TEXT,
        receiver TEXT,
        type TEXT,
        intensity INTEGER,
        complementary_info TEXT,
        reserved INTEGER,
        status TEXT,
        timestamp INTEGER,
        content_validation TEXT);
 * 
 */


module.exports = function(app, db, jsonParser){
 
    var fields = ["id", "pacient", "header", "topic", "sender",
                  "receiver", "type", "intensity", "complementary_info", "reserved", "status",
                  "timestamp", "content_validation"];
 
    console.log("Registering endpoint: /api/movements");
 
    app.get('/api/movements', function(req, res){
        console.log("SELECT " + fields.join(", ") + " FROM movements");
        db.all("SELECT " + fields.join(", ") + " FROM movements", function(err, rows) {
            res.json(rows);
        });
    });

    app.get('/api/movements_by_1', function(req,res){
	console.log("SELECT " + fields.join(", ") + " FROM movements");
	db.get("SELECT " + fields.join(", ") + " FROM movements", function(err,rows){
	    res.json(rows);
	});
    });

    //Api/movements/pacient/{pacient}/
    app.get('/api/movements/pacient/:pacient', function(req, res){
        console.log("SELECT " + fields.join(", ") + " FROM movements WHERE pacient=?;");
        db.all("SELECT " + fields.join(", ") + " FROM movements WHERE pacient=?;", req.params.pacient, function(err, rows) {
            res.json(rows);
        });
    });

    app.get('/api/movement/:id', function(req, res){
        console.log("SELECT " + fields.join(", ") + " FROM movements");
        db.get("SELECT " + fields.join(", ") + " FROM movements WHERE id=?;", req.params.id, function(err, rows) {
            res.json(rows);
        });
    });
    

/*
`
      CREATE TABLE IF NOT EXISTS movements (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        pacient INTEGER,
        header TEXT,
        topic TEXT,
        sender TEXT,
        receiver TEXT,
        type TEXT,
        intensity INTEGER,
        complementary_info TEXT,
        reserved INTEGER,
        status TEXT,
        timestamp INTEGER,
        content_validation TEXT);`
*/
        
    app.get('/api/movements/create/movements', function(req, res){
        console.log("CREATE TABLE IF NOT EXISTS movements ( " 
        + fields[0] +" INTEGER PRIMARY KEY AUTOINCREMENT,"
        + fields[1]+" INTEGER,"
        + fields[2]+"  TEXT,"
        + fields[3]+" TEXT,"
        + fields[4]+" TEXT,"
        + fields[5]+" TEXT,"
        + fields[6]+" TEXT,"
        + fields[7]+" INTEGER,"
        + fields[8]+" TEXT,"
        + fields[9]+" INTEGER,"
        + fields[10]+" TEXT,"
        + fields[11]+" INTEGER,"
        + fields[12]+" TEXT"
        +");"
        );
        db.run("CREATE TABLE IF NOT EXISTS movements ( " 
                    + fields[0] +" INTEGER PRIMARY KEY AUTOINCREMENT,"
                    + fields[1]+" INTEGER,"
                    + fields[2]+"  TEXT,"
                    + fields[3]+" TEXT,"
                    + fields[4]+" TEXT,"
                    + fields[5]+" TEXT,"
                    + fields[6]+" TEXT,"
                    + fields[7]+" INTEGER,"
                    + fields[8]+" TEXT,"
                    + fields[9]+" INTEGER,"
                    + fields[10]+" TEXT,"
                    + fields[11]+" INTEGER,"
                    + fields[12]+" TEXT"
                    +");",
                
                    function(err) {
                        if (err) {
                            return console.log(err.message);
                        }
                        // get table informations
                        return res.json("A table was created "+ this.lastID
                        +" || Line(s) changed: "+this.changes);
                
                        
                });
    });    

    app.get('/api/movement/drop/:id', function(req, res){
        console.log("SELECT " + fields.join(", ") + " FROM movements");
        db.run(`DELETE from movements WHERE id = ?;`,
                [req.params.id],
                    function(err) {
                        if (err) {
                            return console.log(err.message);
                          }
                          // get the row(s) droped id
                        return res.json("A row has been droped with rowid "+ req.params.id
                        +" || Row(s) droped: "+this.changes);
                  
                        
                });
    });



    app.get('/api/movement/new/:pacient/:complete_command', function(req, res){
        var module = require('./us43-module');
        var protocol_def = require('./protocol-definition-file.js');

        console.log("INSERT INTO movements (" + fields.join(", ") + ") VALUES (NULL, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?);");
        if(req.params.pacient>0){
            
            var CDS_COMMAND = req.params.complete_command;
            //verificar comando //wrapper
            var e = module.command_wrapper(CDS_COMMAND);

            //se comando livre de erros
            if(e==protocol_def.command_wrapper_no_error()){

                //passo3: quebrar o comando nos tipos de informacao, conforme definido no protocolo.
                var pacient = req.params.pacient;

                var header = String(CDS_COMMAND).substr(protocol_def.header_index() ,protocol_def.header_length() );

                var topic = String(CDS_COMMAND).substr(protocol_def.topic_index() ,protocol_def.topic_length() );

                var sender = String(CDS_COMMAND).substr(protocol_def.from_index() ,protocol_def.from_length() );

                var receiver = String(CDS_COMMAND).substr(protocol_def.to_index() ,protocol_def.to_length() );

                var type = String(CDS_COMMAND).substr(protocol_def.type_index() ,protocol_def.type_length() );

                var intensity = String(CDS_COMMAND).substr(protocol_def.intensity_index() ,protocol_def.intensity_length() );

                var complementary_info = String(CDS_COMMAND).substr(protocol_def.complementary_info_index() ,protocol_def.complementary_info_length() );

                var reserved = String(CDS_COMMAND).substr(protocol_def.reserved_index() ,protocol_def.reserved_length() );

                var status = String(CDS_COMMAND).substr(protocol_def.status_index() ,protocol_def.status_length() );

                var timestamp = String(CDS_COMMAND).substr(protocol_def.timestamp_index() ,protocol_def.timestamp_length() );

                var content_validation = String(CDS_COMMAND).substr(protocol_def.content_validation_index() ,protocol_def.content_validation_length() );

                
                db.run("INSERT INTO movements (" + fields.join(", ") + ") VALUES (NULL, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?);",
                    [pacient, header, topic, sender, receiver, type, intensity,
                    complementary_info, reserved, status, timestamp, content_validation],
                    function(err) {
                        if (err) {
                            return console.log(err.message);
                          }
                          // get the last insert id
                        return res.json("A row has been inserted with rowid "+ this.lastID);
                  
                        
                });
            }else{
                res.json('COMMAND_ERROR TYPE: '+e );
            }    
        }else{
            res.json("error_invalid_parameter");
        }
    
    });


}

