#include <ArduinoJson.h>
#define BAUDRATE 19200
#define TWOMILLISECONDS 2
int sensorValue;

void sendPotentiometerData()
{
  sensorValue= analogRead(A0); 
  Serial.println(sensorValue);      
}

void setup()
{
  Serial.begin(BAUDRATE);
}

void loop()
{
  sendPotentiometerData();
  delay(TWOMILLISECONDS); 
}
