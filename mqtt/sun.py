import paho.mqtt.client as mqtt_client
import random
import time

def on_message(client, userdata, message):
    data = str(message.payload.decode("utf-8"))
    print(f"Received message{data}")

broker = "broker.emqx.io"

client = mqtt_client.Client(f'lab_{random.randint(10000,99999)}')

client.on_message = on_message

try:
    client.connect(broker)
except Exception:
    print("Failed to check")
    exit()

client.loop_start()



client.subscribe('lab/room1/sensor')
time.sleep(600)
client.disconnect()
client.loop_stop()
print('stop comminication')