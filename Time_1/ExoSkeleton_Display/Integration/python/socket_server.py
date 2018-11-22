import socket
HOST = "127.0.0.1"           # Endereco IP do Servidor
PORT = 9999            # Porta que o Servidor esta


def SendToKafka(message):
    import sys
    from kafka import KafkaProducer, KafkaClient, SimpleProducer
    import socket

    KAFKA_TOPIC = 'TS1IN'
    KAFKA_BROKERS = '35.202.217.21:9092' #'192.168.100.100:9091' # see step 1


    producer = KafkaProducer(bootstrap_servers=KAFKA_BROKERS)

    # Must send bytes
    if str(type(message)) != "<type 'str'>":
        message = bytes(message, "utf-8")
   
    # Send the messages
    producer.send(KAFKA_TOPIC, message).get(timeout=30)


def computeMD5hash(my_string):
    import hashlib
    m = hashlib.md5()
    m.update(my_string.encode('utf-8'))
    return m.hexdigest()


tcp = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
orig = (HOST, PORT)
tcp.bind(orig)
tcp.listen(1)
while True:
    con, cliente = tcp.accept()
    print ('Concetado por', cliente)
    while True:
        msg = con.recv(1024).decode("utf-8").replace("\x03","")#.replace("\x00","")
        if not msg: break

        if "RN1234004318" in msg:
            print(cliente, msg)
            h = computeMD5hash(msg[0:43])
            SendToKafka("{0}{1}".format(msg[0:43], h))

    print ('Finalizando conexao do cliente', cliente)
    con.close()