# Hyperledger

### Passo 1: provisionar uma VM Ubuntu 16.04 com os prerequisitos do Hyperledger
```bash
vagrant up
```

### Passo 2: Instalando os componentes do Hyperledger Composer e o Hyperledger Fabric
```bash
vagrant ssh
cd /hyperledger
./install-hyperledger-composer.sh
```

## Passo 3: Executar o Hyperledger e criar o PeerAdminCard
```bash
cd ~/fabric-dev-servers
export FABRIC_VERSION=hlfv12
./startFabric.sh
./createPeerAdminCard.sh
```

## Passo 4: Criar a Business Network
```bash
cd ~/
yo hyperledger-composer:businessnetwork
cd tutorial-network/
composer archive create -t dir -n .
composer network install --card PeerAdmin@hlfv1 --archiveFile tutorial-network@0.0.1.bna
composer network start --networkName tutorial-network --networkVersion 0.0.1 --networkAdmin admin --networkAdminEnrollSecret adminpw --card PeerAdmin@hlfv1 --file networkadmin.card
composer card import --file networkadmin.card
composer network ping --card admin@tutorial-network
```

## Passo 5: Executar o RESTServer
```bash
composer-rest-server -c admin@tutorial-network -n always -w true
```

## Dicas:
Executar e parar o Hyperledger:
```bash
cd ~/fabric-dev-servers
export FABRIC_VERSION=hlfv12
./startFabric.sh
./stopFabric.sh
```

