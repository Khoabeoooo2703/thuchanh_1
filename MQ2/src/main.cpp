#include<Arduino.h>
const int MQ2_PIN = A0; 

void setup() {
    Serial.begin(9600);
}

void loop() {
    int sensorValue = analogRead(MQ2_PIN);
    float voltage = sensorValue * (3.3 / 4095); 
    
    Serial.print("ADC Value: ");
    Serial.print(sensorValue);
    Serial.print(" | Voltage: ");
    Serial.println(voltage, 3);

    delay(1000);
}
