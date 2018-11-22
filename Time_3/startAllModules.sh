#!/bin/bash

echo 'Starting Memory Module'
screen -dmS memoryModule
sleep 1
screen -S memoryModule -X stuff 'node ./US43/memory-start.js'$'\015'
sleep 3
echo 'Starting Collector Module'
screen -dmS collectorModule
sleep 1
screen -S collectorModule -X stuff 'node ./US50/collector-module.js'$'\015'
sleep 2
echo 'Starting Controller'
screen -dmS controller
sleep 1
screen -S controller -X stuff 'node ./US44/us44.js'$'\015'
sleep 2
echo 'Done\n\n'

echo 'List of running Screen Sessions:'
screen -list
