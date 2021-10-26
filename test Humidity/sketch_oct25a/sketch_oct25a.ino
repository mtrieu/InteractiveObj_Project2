  
  
#include "Arduino_SensorKit.h"
 
void setup() {
  Serial.begin(9600);
  Environment.begin();
}
 
void loop() {
  
  Serial.print(Environment.readHumidity()); //print humidity
  Serial.println(",");
  delay(100);
  
}

//source: https://sensorkit.arduino.cc/sensorkit/module/lessons/lesson/08-the-temperature-sensor
