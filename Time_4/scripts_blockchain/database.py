from influxdb import InfluxDBClient

host = '35.192.171.187'
port = 8086
username = 'user_stagihotr'
password = '1234567890'
db_name = 'stagihotr'

try:
    db = InfluxDBClient(host, port, username, password, db_name)
except Exception as e:
    print("Erro ao conectar no DB:")
    print(str(e))
