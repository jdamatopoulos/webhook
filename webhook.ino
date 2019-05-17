// This #include statement was automatically added by the Particle IDE.
#include "DHT.h"

// Defining Pin
#define DHTPIN 3

// Defining Sensor type
#define DHTTYPE DHT22   

// Declaring sensor
DHT dht(DHTPIN, DHTTYPE);

// Setup statement
void setup() {
  Serial.begin(9600);

  dht.begin();
}

// Loog statement
void loop() {
  float t = dht.readTemperature();
  Particle.publish("temp", String(t), PRIVATE);
  delay(5000);      
}