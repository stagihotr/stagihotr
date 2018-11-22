'use strict'

const kafka = require("kafka-node");

const client = new kafka.Client("35.202.217.21");

const producer = new kafka.HighLevelProducer(client);

producer.on("error", function(error) {
  console.error(error);
});

producer.on("ready", function() {
  console.error("Producer connected");
});

process.on("SIGINT", function() {
  client.close(function() {
    process.exit();
  });
});

exports.send = (topic, data) => {
  const payload = [{
    topic: topic,
    messages: data
  }];

  producer.send(payload, function (err, data) {
    console.log(data);
    if (err) {
      console.log(err);
    }
  });
}