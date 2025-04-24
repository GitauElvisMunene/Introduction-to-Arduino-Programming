# OLED Temperature and Humidity Display

This project demonstrates how to create a simple temperature and humidity monitoring system using an Arduino, DHT22 sensor, and OLED display. It's perfect for beginners to learn about:
- Working with I2C communication
- Using sensors (DHT22)
- Displaying data on OLED screens
- Basic Arduino programming concepts

## Components Required
- Arduino board (ESP32 used in this example)
- DHT22 Temperature and Humidity Sensor
- SSD1306 OLED Display (128x64 pixels)
- Jumper wires
- Breadboard (optional)

## Wiring Diagram
```
DHT22 Sensor:
- VCC -> 3.3V
- GND -> GND
- DATA -> Pin 7 (A4)

OLED Display:
- VCC -> 3.3V
- GND -> GND
- SCL -> Pin 2
- SDA -> Pin 42
```

## Libraries Required
- Wire.h (built-in)
- Adafruit_GFX.h
- Adafruit_SSD1306.h
- DHT.h

## How to Install Libraries
1. Open Arduino IDE
2. Go to Sketch -> Include Library -> Manage Libraries
3. Search for and install:
   - Adafruit GFX Library
   - Adafruit SSD1306
   - DHT sensor library

## Code Explanation
The project consists of two main files:
1. `OLED_DHT.ino`: Main program file
2. `pin_configurations.h`: Pin definitions for the project

### Main Features
- Reads temperature and humidity from DHT22 sensor
- Displays data on OLED screen
- Updates readings every 2 seconds
- Includes error handling for sensor readings
- Provides serial monitor output for debugging

## How to Use
1. Connect all components as per the wiring diagram
2. Upload the code to your Arduino
3. The OLED display will show:
   - Temperature in Celsius
   - Humidity percentage
4. You can also monitor the readings through the Serial Monitor

## Troubleshooting
- If the OLED doesn't display anything, check your I2C connections
- If you get "Failed to read DHT!" message, check your DHT22 connections
- Make sure all libraries are properly installed
- Verify the I2C address of your OLED display (default is 0x3C)

## Learning Outcomes
- Understanding I2C communication
- Working with sensors and displays
- Basic error handling in Arduino
- Using custom header files
- Implementing delays and timing
- Serial communication basics

## Next Steps
- Add more sensors
- Implement data logging
- Create a temperature/humidity graph
- Add buttons for different display modes
- Implement alerts for high/low values
