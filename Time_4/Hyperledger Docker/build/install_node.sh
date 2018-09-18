#!/bin/bash
echo
echo "***************************************"
echo "INSTALLING NODE ..."
echo "***************************************"
echo

wget https://deb.nodesource.com/setup_8.x
chmod +x setup_8.x
./setup_8.x
apt-get install -y nodejs