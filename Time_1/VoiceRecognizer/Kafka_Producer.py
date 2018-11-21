# Autor: Fabio kfouri
# Data: 26/10/2018
# Objetivo: Enviar mensagem para o Kafka no topico: TS1IN

import sys
from kafka import KafkaProducer, KafkaClient, SimpleProducer
import socket

KAFKA_TOPIC = 'TS1IN'
KAFKA_BROKERS = '35.202.217.21:9092' #'192.168.100.100:9091' # see step 1


producer = KafkaProducer(bootstrap_servers=KAFKA_BROKERS)

# Must send bytes
messages = [b'STGHTRTOP002PNL004EXO008LF50450RN1542443892d47531b30443453944f2528da721f835']
 
# Send the messages
for m in messages:
    producer.send(KAFKA_TOPIC, m).get(timeout=30)

