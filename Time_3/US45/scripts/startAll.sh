#!/bin/bash

echo 'Starting Zookeeper...'
screen -dmS zookeeper
sleep 1
screen -S zookeeper -X stuff '~/kafka-2.0.0-src/bin/zookeeper-server-start.sh ~/kafka-2.0.0-src/config/zookeeper.properties'$'\015'
sleep 4
echo 'Starting Kafka'
screen -dmS kafka
sleep 1
screen -S kafka -X stuff '~/kafka-2.0.0-src/bin/kafka-server-start.sh ~/kafka-2.0.0-src/config/server.properties'$'\015'
sleep 5
echo 'Done'
