# Testando o broker KAFKA

### Preparando o ambiente:
```sh
$> apt install kafkacat
```

### Subscriber:
```sh
$> kafkacat -C -b 192.168.33.10 -t test
```

### Publisher:
```sh
$> kafkacat -P -b 192.168.33.10 -t test
```
