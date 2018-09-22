# TUTORIAL HYPERLEDGER COM DOCKER


### Descrição dos diretórios:
* **build**: diretório com os arquivos de instalação
* **composer_playground**: diretório com arquivos de start e stop do hyperledger composer playground
* **composer_rest_server**: diretório com arquivo de start do composer rest server

### Requisitos mínimos:
* ubuntu 16.04, 18.04
* docker e docker-compose


### Observações:
* host significa a sua máquina local
* container significa o container docker
* apesar da imagem docker conter todos os requisitos para o hyperledger, o hyperledger fabric deve ser executado no host e não no container
* para o correto funcionamento, é necessário que o hyperledger fabric seja iniciado antes do container

### Descrição dos comandos:
| Comando | Descrição |
| ------ | ------ |
| git clone <link> | clonando o repositório |
| chmod +x <file> | dando permissão de execução de arquivo |
| ./<file> | executando determinado arquivo |
| sudo docker pull <imagem> | realizando pull da imagem online no DockerHub |
| sudo docker ps | retornará os containers rodando |
| sudo docker run <params> <imagem> | executando imagem docker com determinados parâmetros |
| sudo docker exec -ti <XYZ> bash | entrando dentro do container de id/name XYZ |
| CTRL + D | sair de dentro do container docker em execução |

### Clonando e acessando o repositório:
* git clone  [https://github.com/stagihotr/stagihotr.git](https://github.com/stagihotr/stagihotr.git)
* cd DIR

### Instalação docker e docker-compose no host
* entrar na pasta build
* dar permissão para os arquivos install_docker.sh e install_docker_compose.sh
* executar os dois arquivos:
```sh
$ sudo ./install_docker.sh
$ sudo ./install_docker_compose.sh
```

### Executando hyperledger fabric no host:
* como explicado anteriormente, apesar da imagem docker conter todos os requisitos para o hyperledger, o hyperledger fabric deve ser executado no host e não no container.
* para isso, basta você entrar na pasta build e executar o arquivo install_fabric.sh:
```sh
$ chmod +x install_fabric.sh
$ sudo ./install_fabric.sh
```
* após alguns minutos o hyperledger fabric estara rodando na sua máquina
* caso você queira parar o hyperledger fabric:
```sh
$ ./teardownFabric.sh
```

### Executando container
* antes de iniciar o container é necessário que você tenha a imagem docker na sua máquina. Para isto, você deve dar o pull da imagem disponível no DockerHub. Esta imagem contem todos os requisitos para a execução do Hyperledger Composer Playground, yo, criação e execução de business networks.
* pull da imagem disponível no DockerHub:
```sh
$ sudo docker pull gustavogomides/hyperledger
```
* agora que você tem a imagem, chegou a hora de rodar o container:
```sh
$ sudo docker run -d -v /var/run/docker.sock:/var/run/docker.sock --network=host --name c-hyperledger gustavogomides/hyperledger
```
* se você utilizar o comando verá que o container c-hyperledger está rodando
```sh
$ sudo docker ps
```
* caso queira parar o container
```sh
$ sudo docker rm -f c-hyperledger
```

### Executando hyperledger composer playground
* caso você queira executar o hyperledger composer playground, siga os passos:
```sh
$ sudo docker exec -ti c-hyperledger bash
$ sudo chmod +x start_composer_playground.sh
$ ./start_composer_playground.sh
```
* após alguns minutos o hyperledger composer playground estará em execução. Caso você queira verificar se ele está em execução:
```sh
$ sudo docker ps
```
* agora, basta acessar [http://localhost:8081](http://localhost:8081) no seu browser.

* caso queira parar a execução:
```sh
$ sudo chmod +x stop_composer_playground.sh
$ ./stop_composer_playground.sh
```

### Criação de uma business network
* com o hyperledger fabric rodando no host e o container em execução, chegou a hora de criarmos nossa primeira business network. Para isto, utilizaremos Yeoman Generator.

* caso você já tenha saída do container:
```sh
$ sudo docker exec -ti c-hyperledger bash
```
* os passos abaixo devem ser executados dentro do container:
```sh
$ mkdir first_business_network && cd first_business_network
$ yo hyperledger-composer:businessnetwork
```
* caso apareça a mensagem "We're constantly looking for ways to make yo better!" apenas digite Y e tecle Enter
* em seguida:
```sh
			? Business network name: tutorial-network
			? Description: My First Business Network
			? Author name: Linus Torvalds
			? Author email: linus@email.com
			? License: Apache-2.0
			? Namespace: org.example.biznet
			? Do you want to generate an empty template network? No: generate a populated sample network
	
$ cd tutorial-network

$ composer archive create -t dir -n .

$ ~/fabric-dev-servers/createPeerAdminCard.sh

$ composer network install --card PeerAdmin@hlfv1 --archiveFile tutorial-network@0.0.1.bna

$ composer network start --networkName tutorial-network --networkVersion 0.0.1 --networkAdmin admin --networkAdminEnrollSecret adminpw --card PeerAdmin@hlfv1 --file networkadmin.card

$ composer card import --file networkadmin.card
```
* após esses passos, você pode verificar pelo comando que a nossa business foi criada e está rodando com sucesso
```sh
$ sudo docker ps
```

### Criação de uma API REST
	
* agora vamos gerar uma API REST para nossa business network. 

* para isso, caso você já tenha saída do container:
```sh
$ sudo docker exec -ti c-hyperledger bash
```	
* em seguida iremos executar o composer rest server. Altere este arquivo com as informações da sua business network:
```sh
$ chmod +x start_composer_rest_server.sh
$ ./start_composer_rest_server.sh
```
* agora podemos acessar o browser no endereço [http://localhost:3000/explorer](http://localhost:3000/explorer) para visualizarmos a API REST

* mesmo você fechando o terminal aberto, a API ainda estará em execução.

* caso queira parar a execução:
```sh
$ ps x | grep node
$ kill -9 <ID>, onde ID é o id do processo do composer-rest-server
```