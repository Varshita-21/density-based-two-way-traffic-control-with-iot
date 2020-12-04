#include "ThingSpeak.h"
#include "secrets.h";
#include <ESP8266WiFi.h>
char ssid[] = "ACT109449133481";   
char pass[] = "70144272";  
int keyIndex = 0;            
WiFiClient  client;
unsigned long myChannelNumber = 1196313;
const char * myWriteAPIKey = "P53XRRIR391G874H";
void setup() {
  Serial.begin(115200);  // Initialize serial
  WiFi.mode(WIFI_STA); 
  ThingSpeak.begin(client);  // Initialize ThingSpeak
  
}


void loop() {

  
int ir = 14;
  pinMode(ir, INPUT);
  int number=0;
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(SECRET_SSID);
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass);  
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConnected.");
  }
  if(digitalRead(ir) == LOW){
    number=1;
  int x = ThingSpeak.writeField(myChannelNumber, 1, number, myWriteAPIKey);
  if(x == 200){
    Serial.println("Channel update successful.");
  }
  else{
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }
  }
  else{
    number =0; 
    int x = ThingSpeak.writeField(myChannelNumber, 1, number, myWriteAPIKey);
  }
  
}
