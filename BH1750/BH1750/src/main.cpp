
#include<Arduino.h>
#include <BH1750.h>
#include <Wire.h>

BH1750 lightMeter(0x23);

void setup() {

  Serial.begin(9600);
  Wire.begin();
  
  if (lightMeter.begin(BH1750::CONTINUOUS_HIGH_RES_MODE)) {
    Serial.println(F("BH1750"));
  } else {
    Serial.println(F("Loi hien thi"));
  }
}

void loop() {
  if (lightMeter.measurementReady()) {
    float lux = lightMeter.readLightLevel();
    Serial.print("Do sang: ");
    Serial.print(lux);
    Serial.println(" lx");
  }
}
