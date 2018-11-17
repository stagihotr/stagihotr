from kafka import KafkaConsumer

consumer = KafkaConsumer('TS1IN',
                         group_id='TS1IN',
                         bootstrap_servers=['35.202.217.21:9092'])

for message in consumer:
    # message value and key are raw bytes -- decode if necessary!
    # e.g., for unicode: `message.value.decode('utf-8')`
    print ("%s:%d:%d: key=%s value=%s" % (message.topic, message.partition,
                                          message.offset, message.key,
                                          message.value))

                                          