# Autor: Fabio kfouri
# Data: 26/10/2018
# Objetivo: Enviar mensagem para o Kafka no topico: erlun

import sys # used to exit
from kafka import KafkaConsumer
KAFKA_TOPIC = 'erlun'
KAFKA_BROKERS = '192.168.100.100:9091'# ,192.168.100.10:9092,192.168.100.10:9093' # see step 1

consumer = KafkaConsumer(KAFKA_TOPIC, bootstrap_servers=KAFKA_BROKERS, 
                         auto_offset_reset='earliest')
try:
    for message in consumer:
        print(message.value)
except KeyboardInterrupt:
    sys.exit()