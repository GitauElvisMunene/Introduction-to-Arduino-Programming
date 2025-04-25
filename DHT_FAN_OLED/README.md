# DHT_FAN_OLED Project

This project implements an automatic temperature-controlled fan system with OLED display using an Arduino board. The system monitors temperature and humidity using a DHT22 sensor and controls a fan based on temperature readings.

## Features

- Real-time temperature and humidity monitoring using DHT22 sensor
- Automatic fan control based on temperature threshold (21°C)
- OLED display showing temperature and humidity readings
- Serial monitor output for debugging

## Hardware Requirements

- Arduino board (compatible with ESP32)
- DHT22 Temperature and Humidity Sensor
- SSD1306 OLED Display (128x64 pixels)
- DC Motor/Fan
- Jumper wires
- Breadboard (optional)

## Pin Connections

| Component | Pin | Description |
|-----------|-----|-------------|
| DHT22 | A4 (7) | Temperature and Humidity Sensor |
| OLED Display | SDA: 42, SCL: 2 | I2C Communication |
| Motor | INA: D3 (38), INB: D4 (35) | Motor Control Pins |

## Libraries Required

- DHT.h
- Wire.h
- Adafruit_GFX.h
- Adafruit_SSD1306.h

## Functionality

1. The system continuously monitors temperature and humidity using the DHT22 sensor
2. Temperature and humidity readings are displayed on the OLED screen
3. When temperature exceeds 21°C:
   - Fan turns ON
   - Motor spins in one direction
4. When temperature drops below 21°C:
   - Fan turns OFF
   - Motor stops

## Setup Instructions

1. Connect the hardware components according to the pin configuration
2. Install the required libraries in the Arduino IDE
3. Upload the code to your Arduino board
4. Power on the system

## Troubleshooting

1. If the OLED display doesn't show anything:
   - Check I2C connections
   - Verify the display address (0x3C)
   - Ensure proper power supply

2. If the DHT22 sensor readings are incorrect:
   - Check the sensor connections
   - Verify the correct pin is used
   - Ensure proper power supply

3. If the fan doesn't turn on/off:
   - Check motor connections
   - Verify the control pins
   - Ensure proper power supply to the motor

## License

This project is open-source and available for educational and personal use.

## Author

Elvis Munene

## Version

1.0.0 