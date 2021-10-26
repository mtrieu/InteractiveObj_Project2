int sound_sensor = A2; //assign to pin A2
 
void setup() 
{
  Serial.begin(9600); //begin Serial Communication
}
 
void loop()
{
  int soundValue = 0; //create variable to store many different readings
  for (int i = 0; i < 32; i++) //create a for loop to read 
  { soundValue += analogRead(sound_sensor);  } //read the sound sensor
 
  soundValue >>= 5; //bitshift operation 
  Serial.println(soundValue); //print the value of sound sensor
 
 
  delay(50); //a shorter delay between readings
}

//source: https://sensorkit.arduino.cc/sensorkit/module/lessons/lesson/06-the-sound-sensor
