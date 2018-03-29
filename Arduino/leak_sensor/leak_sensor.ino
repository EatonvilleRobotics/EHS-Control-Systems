void setup(){
Serial.begin(9600);     // Communication started with 9600 baud
}
void loop(){
int sensor=analogRead(A1);
if (sensor > 10) {
  Serial.println("Water Detected.");
  Serial.println("Recommended Removable of ROV");
} else if (sensor > 3) {
  Serial.println("Slight Moisture Detected");
} else if (sensor < 3) {
  Serial.println("No Moisture Dectected");
} else {
  Serial.println("Code Error");
}
  
//int sensor=analogRead(A1); // Incoming analog signal read and appointed sensor
//Serial.println(sensor);   //Wrote serial port
}
