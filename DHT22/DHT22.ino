#include<Arduino.h>
#include<Wire.h>
#include <DHT.h>

#define DHTPIN 12
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humi = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float temp = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  
  // Check if any reads failed and exit early (to try again).
  

  
  Serial.print(F("Humidity: "));
  Serial.print(humi);
  Serial.println(F("%  Temperature: "));
  Serial.print(temp);
  Serial.print(F("°C "));
  Serial.println();
  delay(3000);
}
