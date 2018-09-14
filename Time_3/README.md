# STAGIHO-TR

**S**oluções **T**ecnológicas **A**plicáveis ao **G**erenciamento de **I**nformações **H**ospitalares **O**stensivas com **T**empo **R**eal

Criando a business network:
yo hyperledger-composer:businessnetwork
cd tutorial-network/
composer archive create -t dir -n .
composer network install --card PeerAdmin@hlfv1 --archiveFile tutorial-network@0.0.1.bna
composer network start --networkName tutorial-network --networkVersion 0.0.1 --networkAdmin admin --networkAdminEnrollSecret adminpw --card PeerAdmin@hlfv1 --file networkadmin.card
composer card import --file networkadmin.card
composer network ping --card admin@tutorial-network

Listando:
composer card list
composer network list -c admin@tutorial-network

Iniciando REST Server:
composer-rest-server -c admin@tutorial-network -n always -w true


