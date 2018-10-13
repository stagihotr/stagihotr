# SCRIPT BLOCKCHAIN

Script para a inserção e recuperação de informações no blockchain.

Antes de executar o script é necessário ter o python3 e pip3 instalados.

Além disso é necessário instalar as bibliotecas:
```sh
sudo pip3 install -r requirements.txt
``` 

Para visualizar o manual de execução do script:
```sh
python3 app.py -h
```

Exemplos de utilização:
```sh
### AJUDA
python3 app.py -h

### CADASTRAR PACIENTES
python3 app.py -op 1 -in /home/gustavo/Documentos/Estudo/stagihotr/datasets/pacientes.csv

### CADASTRAR MOVIMENTOS DE LEVANTAR
python3 app.py -op 3 -in /home/gustavo/Documentos/Estudo/stagihotr/datasets/movimento_levantar.csv

### LISTAR MOVIMENTOS DE LEVANTAR
python3 app.py -op 7 -in /home/gustavo/Documentos/Estudo/stagihotr/datasets/levantar_hashs.csv -out /home/gustavo/Documentos/Estudo/stagihotr/datasets/movimentos_get.csv
```