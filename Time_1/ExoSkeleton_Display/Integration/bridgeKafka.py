# Autor: Marcelo Paiva
# Data: 06/10/2017
# Objetivo: Enviar mensagem para o Kafka no topico: erlun

import sys
from kafka import KafkaClient, SimpleProducer
import socket

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 1:
        print("Usage: bridgeKafka.py")
        exit(-1)

    # Inicializa variaveis
    broker = "stampsnet.hashtagsource.com:9092"
    topico = "erlun"

    # Abre conexao
    HOST = ''
    PORT = 50020
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind((HOST, PORT))
    s.listen(1)
    print ("Aguardando conexao...")
    
    # Conecta no servidor Kafka
    kafkaServer = KafkaClient(broker)
    producer = SimpleProducer(kafkaServer)

    # Processando mensagens...
    mensagem = ""
    while True:
        conn, addr = s.accept()
        while True:
            mensagem = conn.recv(512)
            if not mensagem: break     
            if mensagem == 'q': break
            print ("From: %s    Message: %s") %(addr[0],mensagem)

            # Envia mensagem para o Kafka
            producer.send_messages(topico, mensagem)
            
        # Sai se 'q' for recebido como mensagem
        if mensagem == 'q': break
