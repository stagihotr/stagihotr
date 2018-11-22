import sys

try:
    mensagem = sys.argv[1]
except:
    mensagem = "teste luciana"

with open('E:\\Projetos\\stagiho-tr\\Time_1\\ExoSkeleton_Display\\Integration\\Output.txt', 'a') as file:
    file.write("Text: %s\n" % mensagem )

