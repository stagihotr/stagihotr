# Autor: Fabio kfouri
# Data: 26/10/2018
# Objetivo: Enviar mensagem para o Kafka no topico: erlun

import sys
from kafka import KafkaProducer, KafkaClient, SimpleProducer
import socket

KAFKA_TOPIC = 'erlun'
KAFKA_BROKERS = '192.168.100.100:9091' # see step 1


producer = KafkaProducer(bootstrap_servers=KAFKA_BROKERS)

# Must send bytes
messages = [b'hello kafka', b'I am sending', b'3 test messages']
 
# Send the messages
for m in messages:
    producer.send(KAFKA_TOPIC, m)

#sys.exit()