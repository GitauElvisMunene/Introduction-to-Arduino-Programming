#include "pin_configurations.h"  // Custom pin definitions
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

// OLED Setup
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// DHT22 Setup
#define DHTTYPE DHT22
DHT dht(DHT_PIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  
  // Initialize OLED with custom I2C pins
  Wire.begin(I2C_SDA, I2C_SCL);
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("OLED allocation failed"));
    while (1);
  }
  display.clearDisplay();
  
  // Initialize DHT22
  dht.begin();
}

void loop() {
  delay(2000);  // Delay between readings
  
  // Read sensor data
  float humi = dht.readHumidity();
  float tempC = dht.readTemperature();
  
  // Check for errors
  if (isnan(humi) || isnan(tempC)) {
    Serial.println("Failed to read DHT!");
    return;
  }
  
  // Display on OLED
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  
  display.setCursor(0, 0);
  display.print("Temp: ");
  display.print(tempC);
  display.print(" C");
  
  display.setCursor(0, 20);
  display.print("Humidity: ");
  display.print(humi);
  display.print(" %");
  
  display.display();
  
  // Optional: Serial output
  Serial.print("Temp: "); Serial.print(tempC);
  Serial.print(" C, Humidity: "); Serial.print(humi); Serial.println(" %");
}