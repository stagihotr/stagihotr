#!/bin/bash

echo 'Stopping Controller'
screen -S controller -X stuff $'\003'
sleep 1
screen -S controller -X stuff 'exit'$'\015'
echo 'Stopping Collector Module'
screen -S collectorModule -X stuff $'\003'
sleep 1
screen -S collectorModule -X stuff 'exit'$'\015'
echo 'Stopping Memory Collector'
screen -S memoryCollector -X stuff $'\003'
sleep 1
screen -S memoryCollector -X stuff 'exit'$'\015'
echo 'Stopping Memory Module'
screen -S memoryModule -X stuff $'\003'
sleep 1
screen -S memoryModule -X stuff 'exit'$'\015'
echo 'Done'
