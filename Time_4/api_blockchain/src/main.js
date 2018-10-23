var createError = require('http-errors'),
  express = require('express'),
  expressValidator = require('express-validator'),
  path = require('path'),
  cookieParser = require('cookie-parser'),
  logger = require('morgan'),
  debug = require('debug')('api-blockchain:server'),
  http = require('http'),
  cors = require('cors'),
  compression = require('compression'),
  movimentosRouter = require('./movimentos/routes/movimentos'),
  pacientesRouter = require('./pacientes/routes/pacientes');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(cors());
app.use(compression())
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));
app.use(expressValidator());

app.use('/movimentos', movimentosRouter);
app.use('/pacientes', pacientesRouter);

// catch 404 and forward to error handler
app.use(function (req, res, next) {
  next(createError(404));
});

// error handler
app.use(function (err, req, res, next) {
  // set locals, only providing error in development
  res.locals.message = err.message;
  res.locals.error = req.app.get('env') === 'development' ? err : {};

  // render the error page
  res.status(err.status || 500);
  res.render('error');
});

var port = normalizePort(process.env.PORT || '3007');
app.set('port', port);

function normalizePort(val) {
  var port = parseInt(val, 10);

  if (isNaN(port)) {
    // named pipe
    return val;
  }

  if (port >= 0) {
    // port number
    return port;
  }

  return false;
}

function onError(error) {
  if (error.syscall !== 'listen') {
    throw error;
  }

  var bind = typeof port === 'string'
    ? 'Pipe ' + port
    : 'Port ' + port;

  // handle specific listen errors with friendly messages
  switch (error.code) {
    case 'EACCES':
      console.error(bind + ' requires elevated privileges');
      process.exit(1);
      break;
    case 'EADDRINUSE':
      console.error(bind + ' is already in use');
      process.exit(1);
      break;
    default:
      throw error;
  }
}

function onListening() {
  var addr = server.address();
  var bind = typeof addr === 'string'
    ? 'pipe ' + addr
    : 'port ' + addr.port;
  console.log('Listening on ' + bind);
}

var server = http.createServer(app);

server.listen(port);
server.on('error', onError);
server.on('listening', onListening);

module.exports = app;
