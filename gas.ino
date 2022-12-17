#define gasensor 0

float sensorValue;  

void setup() {
	Serial.begin(9600); 
	Serial.println("Started");
	delay(20000); 
}

void loop() {
	sensorValue = analogRead(gasensor); 

	Serial.print("Sensor Value: ");
	Serial.println(sensorValue);
	
	delay(2000); 
}