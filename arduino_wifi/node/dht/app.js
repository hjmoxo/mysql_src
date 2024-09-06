var express = require('express');
var app = express();

var http     = require('http').Server(app);
var io       = require('socket.io')(http);

var SerialPort = require('serialport').SerialPort;

var ReadlineParser = require('@serialport/parser-readline').ReadlineParser;

var parsers    = SerialPort.parsers;

// 추가함 
var temp = "";
var humi = "";


var sp = new SerialPort( 
{

  path: 'COM3',

  baudRate: 9600,
});

const parser = sp.pipe(new ReadlineParser({ delimiter: '\r\n' }));

sp.on('open', () => console.log('Port open'));
var ledStatus ="";
parser.on('data', function (data) {
  var rcv = data.toString();
  ////////////////////////////////////////////////////////
	if (rcv.substring(0, 4) == 'temp'){
		
		temp = rcv.substring(4,6);	
		console.log("temp = ", temp);
		io.emit('temp', temp);
	}
	if (rcv.substring(0, 4) == 'humi') {
		
		humi = rcv.substring(4,6);	
		console.log("humi = ", humi);
		io.emit('humi', humi);
	}
		
  //////////////////////////////////////////////////////// case of starting with "led"
  if (rcv.substring(0, 3) == 'adc'){
	  var adc = parseInt(rcv.substring(3));
	  console.log('adc:',adc);
	  io.emit('adc', adc);
  //////////////////////////////////////////////////////// case of starting with "adc"
  }
});

 
app.get('/led_off',function(req,res)

{
	sp.write('led0\n\r', function(err){

		if (err) {

            return console.log('Error on write: ', err.message);

        }

        console.log('send: led off');

		res.writeHead(200, {'Content-Type': 'text/plain'});

		res.end('LED OFF\n');

	}); 

});

app.use(express.static(__dirname + '/public'));

const port = 3000;
http.listen(port, function () {
  console.log('Server listening on http://localhost:' + port);
});