#!/bin/bash
echo
echo "***************************************"
echo "INSTALLING DOCKER-COMPOSE ..."
echo "***************************************"
echo

curl -L https://github.com/docker/compose/releases/download/1.21.2/docker-compose-$(uname -s)-$(uname -m) -o /usr/local/bin/docker-compose
chmod +x /usr/local/bin/docker-compose