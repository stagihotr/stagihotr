# Instalação Kafka no Raspberry Pi: Passo a Passo

Esse passo a passo é válido para uma imagem Raspbian.

### Passo 1
Baixar o gradle para instalação e build do kafka
'''bash
sudo curl -s "https://get.sdkman.io" | bash
'''
Faz logout no bash e login novamente e então:
'''bash
sudo sdk install gradle 4.10.2
'''

### Passo 2
Aumentar a memória SWAP do raspbian para possibilitar o build
'''bash
sudo dphys-swapfile swapoff
sudo nano /etc/dphys-swapfile
'''
mudar a variável CONF_SWAPSIZE para 1536 (1,5Gb) e salvar as novas 
configurações, e então:
'''bash
sudo dphys-swapfile swapon
'''

### Passo 3
Baixar o Kafka, descompactar e fazer a build
'''bash
wget https://www-eu.apache.org/dist/kafka/2.0.0/kafka-2.0.0-src.tgz
tar -xzf kafka-2.0.0-src.tgz
cd kafka-2.0.0-src/
sudo env "PATH=$PATH" gradle
sudo env "PATH=$PATH" ./gradlew jar
sudo env "PATH=$PATH" ./gradlew srcJar
'''

### Passo 4
Caso tenha ocorrido a build com sucesso, basta rodar os seguintes 
comandos para se iniciar o servidor:

No 1o Terminal:
'''bash
sudo bin/zookeeper-server-start.sh config/zookeeper.properties
'''

No 2o Terminal:
'''bash
sudo bin/kafka-server-start.sh config/server.properties
'''

Deixe as duas janelas abertas e o kafka estará rodando

### Passo 5
Fazer a criação de um tópico
'''bash
sudo bin/kafka-topics.sh --create --zookeeper (localhost/seuIP):2181 
--replication-factor 1 --partitions 1 --topic (NomeDoTopico)
'''

### Passo 6
Criar um Produtor/Consumidor para os tópicos criados utilizando o 
próprio kafka

Produtor
'''bash
sudo bin/kafka-console-producer.sh --broker-list (localhost/seuIP):9092 
--topic (NomeDoTopico)
'''
Consumidor
'''bash
sudo bin/kafka-console-consumer.sh --bootstrap-server 
(localhost/seuIP):9092 --topic (NomeDoTopico) --from-beginning
'''

Para criar o Produtor/Consumidor utilizando o Kafkacat
'''bash
sudo apt-get install kafkacat
'''

logout e login no shell

Produtor
'''bash
kafkacat -C -b (localhost/seuIP):9092 -t (NomeDoTopico)
'''

Consumidor
'''bash
kafkacat -P -b (localhost/seuIP):9092 -t (NomeDoTopico)
'''

Tudo deve estar funcionando e a troca de mensagens deve estar sendo 
executada normalmente!
