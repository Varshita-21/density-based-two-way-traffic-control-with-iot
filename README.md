It is a hardware based IoT project, in which the traffic lights are triggered based on traffic density which run on arduino code. The person who crosses road when he's not supposed to, a notification is sent to phone via IFTTT and also MIT app inventor. The hardware data form node mcu is sent to Thingspeak which in turn is sent either to IFTTT or MIT app inventor which send a notification to respected authorities. 

Requirements:
Hardware: NodeMCU(ESP8266), IR sensors, Arduino UNO, LEDs, battery and resistors.
Software: Arduino IDE, ThingSpeak, IFTTT, MIT appinventor.

Implementation:
1. LED and IR sensor connections are made with Arduino board and an IR sensor is attached to NodeMCU.
2. A code is written on Arduino IDE to control the traffic lights depending on the traffic density. IR sensors attached on the side of roads determine the traffic density.
3. Any vehicle crossing the road during red light is captured by a IR sensor attached to NodeMCU.
4. NodeMCU sets up a connection with ThingSpeak server and sends the live sensor data to it.
5. A trigger is generated whenever the IR sensor attached to NodeMCU reads high.
6. Trigger can be generated using IFTTT or by creating an app using MIT app inventor.
