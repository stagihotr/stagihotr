import socket
import sys
import os

#https://wiki.python.org.br/SocketBasico
HOST = "127.0.0.1"
PORT = 9999


tcp = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
dest = (HOST, PORT)
tcp.connect(dest)
print('Para sair use CTRL+X\n')
msg = "teste 123"

if str(type(msg)) != "<type 'str'>":
    msg = bytes(msg, "utf-8")

tcp.send (b'STGHTRTOP001PNL001EXO001FW90010RN123400431821d1dbb4b4188586354f00413c6cbff')

tcp.close()