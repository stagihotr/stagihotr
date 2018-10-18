# Autor: Marcelo Paiva
# Data: 06/10/2017
# Objetivo: Enviar mensagem para o Kafka no topico: erlun

import sys
from kafka import KafkaClient, SimpleProducer
import socket

# Envia mensagem para bridgeKafka:50020
def sendData(vet):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect(("localhost", 50020))
    s.sendall(vet)
    s.close()

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 2:
        print("Usage: send2Bridge.py <mensagem>")
        exit(-1)

    # Inicializa variaveis
    broker = "stampsnet.hashtagsource.com:9092"
    topico = "erlun"
    mensagem = sys.argv[1]

    # Python 3
    if str(type(mensagem)) != "<type 'str'>":
        mensagem = bytes(mensagem, "utf-8")
    
    # Envia mensagem para o socket
    sendData(mensagem)
