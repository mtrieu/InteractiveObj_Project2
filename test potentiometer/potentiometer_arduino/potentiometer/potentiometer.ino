int potentiometer = A0; //Assign to pin A0
 
void setup()
{
    Serial.begin(9600); //Begin serial communication
    pinMode(potentiometer, INPUT); //Sets the pinmode to input
}
 
void loop()
{   
    int sensor_value = analogRead(potentiometer); //Read the value from the potentiometer connected to the A0 pin
    int value = map(sensor_value, 0, 1023, 0, 400); //Map the value from 0, 1023 to 0, 100
    Serial.println(value); //Print the value in the serial monitor
    delay(10); //Add a delay to see the value every 1/2 second
}

//source: https://sensorkit.arduino.cc/sensorkit/module/lessons/lesson/03-the-potentiometer
