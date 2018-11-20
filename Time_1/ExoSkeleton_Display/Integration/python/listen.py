import socket
import sys
import os

#https://wiki.python.org.br/SocketBasico
HOST = "127.0.0.1"
PORT = 1231

tcp = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
dest = (HOST, PORT)
tcp.bind(dest)
tcp.listen(1)

while True:
    con, cliente = tcp.accept()
    pid = os.fork()
    if pid == 0:
        tcp.close()
        print ('Conectado por', cliente)
        while True:
            msg = con.recv(1024)
            if not msg: break
            print (cliente, msg)
        print( 'Finalizando conexao do cliente', cliente)
        con.close()
        sys.exit(0)
    else:
        con.close()