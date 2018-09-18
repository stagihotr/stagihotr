#!/bin/bash

apt-get update && apt-get install -y gcc make g++ software-properties-common wget curl nano

# NODE
chmod +x ./install_node.sh
./install_node.sh

# DOCKER
chmod +x ./install_docker.sh
./install_docker.sh

# DOCKER-COMPOSE
chmod +x ./install_docker_compose.sh
./install_docker_compose.sh

# PYTHON
chmod +x ./install_python.sh
./install_python.sh