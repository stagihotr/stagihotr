import os

import pandas as pd
import requests
from datetime import datetime


def ler_arquivo(nome_arquivo):
    path_file = os.path.join(os.path.abspath(
        os.path.dirname(__file__)), nome_arquivo)
    reader = pd.read_csv(path_file, delimiter=',', engine='python')

    return reader


def validar_str(string):
    return str(string).strip() if string and str(string) != 'nan' else '-'


def enviar_req(url, data=None):
    url = 'http://35.232.70.182:3000/api/' + url
    if data:
        r = requests.post(url, json=data, verify=False)
    else:
        r = requests.get(url, verify=False)
    if r and r.status_code in (200, 201):
        return True, r.json()
    return False, r.json()


def insert_db(measurement, data, db):
    try:
        body = [
            {
                "measurement": measurement,
                "tags": {
                    "user": "stagihotr"
                },
                "time": str(datetime.now()),
                "fields": data
            }
        ]
        db.write_points(body)
    except Exception as e:
        print("Erro ao inserir {} no banco:".format(measurement))
        print(str(e))
