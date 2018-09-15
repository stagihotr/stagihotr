#!/bin/bash
#
# https://hyperledger.github.io/composer/latest/installing/development-tools.html

export FABRIC_VERSION=hlfv12

sudo npm config set user 0
sudo npm config set unsafe-perm true

# Essential CLI tools
sudo npm install -g composer-cli@0.20

# Utility for running a REST Server on your machine to expose your business networks as RESTful APIs
sudo npm install -g composer-rest-server@0.20

# Useful utility for generating application assets
sudo npm install -g generator-hyperledger-composer@0.20

# Yeoman is a tool for generating applications, which utilises generator-hyperledger-composer:
sudo npm install -g yo

# Browser app for simple editing and testing Business Networks:
sudo npm install -g composer-playground@0.20

# Fix permission
sudo chown -R vagrant:vagrant /home/vagrant/.config/

# In a directory of your choice (we will assume ~/fabric-dev-servers), get the .tar.gz file that contains the tools to install Hyperledger Fabric:
mkdir ~/fabric-dev-servers && cd ~/fabric-dev-servers
curl -O https://raw.githubusercontent.com/hyperledger/composer-tools/master/packages/fabric-dev-servers/fabric-dev-servers.tar.gz
tar -xvf fabric-dev-servers.tar.gz

# Use the scripts you just downloaded and extracted to download a local Hyperledger Fabric v1.2 runtime:
cd ~/fabric-dev-servers
./downloadFabric.sh