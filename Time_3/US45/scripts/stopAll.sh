#!/bin/bash

echo 'Stopping Kafka...'
screen -S kafka -X stuff $'\003'
sleep 5
screen -S kafka -X stuff 'exit'$'\015'
echo 'Stopping Zookeeper...'
screen -S zookeeper -X stuff $'\003'
sleep 2
screen -S zookeeper -X stuff 'exit'$'\015'
echo 'Done'
