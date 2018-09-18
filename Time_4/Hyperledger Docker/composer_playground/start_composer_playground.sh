#!/bin/bash
echo
echo "**********************************************"
echo "STARTING HYPERLEDGER COMPOSER PLAYGROUND ...  "
echo "**********************************************"
echo

sudo docker run -d -p 8081:8080 --name composer-playground hyperledger/composer-playground

echo
echo "Browse Hyperledger Composer Playground at http://localhost:8081"
echo