# Autor: Marcelo Paiva
# Data: 06/10/2017
# Objetivo: Enviar mensagem para o Kafka no topico: erlun

import sys
from kafka import KafkaProducer

# Envia mensagem para o kafka
def sendDataToKafka(msg):
    KAFKA_TOPIC = 'erlun'
    KAFKA_BROKERS = '192.168.100.100:9091,192.168.100.10:9092,192.168.100.10:9093' # see step 1

    producer = KafkaProducer(bootstrap_servers=KAFKA_BROKERS)
    producer.send(KAFKA_TOPIC, msg)


# Programa principal
if __name__ == "__main__":

    # Help
    
    if len(sys.argv) != 2:
        print("Usage: send2Bridge.py <mensagem>")
        sys.exit(-1)
      

    # Inicializa variaveis
    try:
        mensagem = sys.argv[1]
    except:
        mensagem = "teste fabio"


    # Python 3
    
    if str(type(mensagem)) != "<type 'str'>":
        mensagem = bytes(mensagem, "utf-8")
    
    #mensagem = bytes(mensagem, "utf-8")
    
    # Envia mensagem para o socket
    sendDataToKafka(mensagem)
