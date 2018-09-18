#!/bin/bash
echo
echo "***************************************"
echo "DOWNLOADING FABRIC ..."
echo "***************************************"
echo

mkdir fabric-dev-servers && cd fabric-dev-servers
curl -O https://raw.githubusercontent.com/hyperledger/composer-tools/master/packages/fabric-dev-servers/fabric-dev-servers.tar.gz
tar -xvf fabric-dev-servers.tar.gz