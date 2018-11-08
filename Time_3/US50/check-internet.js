var exec = require('child_process').exec, child;
var internetAvailable = require("internet-available");

testInternet = function(){
	internetAvailable().then(function(){
		return true;
	}).catch(function(){
		return false;
	});
};

testServer = function(){
	child = exec('ping -c 1 35.232.70.182', function(error, stdout, stderr){
		if (error !== null){
			return false;
		}else{
			return true;
		}
	});
};

exports.test = function(){
	var internetAvailable = testInternet();
	console.log(internetAvailable);
	var serverAvailable = testServer();
	console.log(serverAvailable);

	if(internetAvailable)
		if(serverAvailable)
			return 0; //"Internet and blockchain Server available";
		else
			return 1; //"Internet available and Server down";
	else
		return 2; //"No Internet Available";
};
