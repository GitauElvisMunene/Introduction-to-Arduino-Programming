# Control an LED using Logical Operators (AND, OR, NOT)

## Objective
In this project, you will control an LED connected to an ESP32 by entering a number via the Serial Monitor. Using logical operators, you will define conditions that decide when the LED turns on or off.

## Materials Needed
- ESP32 development board
- LED
- Resistor (100Ω)
- Jumper wires
- Breadboard
- USB cable (for connecting the ESP32 to your computer)
- Arduino IDE installed on your computer

## Hardware Setup
1. Connect the LED:
   - Connect the positive leg (anode) of the LED to digital pin 19 of the ESP32
   - Connect a 100Ω resistor between the positive leg (anode) of the LED and the GND pin of the ESP32

## Software Setup
1. Open the Arduino IDE on your computer
2. Select your ESP32 board:
   - Go to Tools > Board > ESP32S2 Dev Module
3. Choose the correct COM port:
   - Go to Tools > Port

## Uploading the Code
1. Connect your ESP32 to your computer using the USB cable
2. Click the Upload button in the Arduino IDE to upload the code to your ESP32

## Testing the Project
1. Open the Serial Monitor:
   - Click on the magnifying glass icon in the top-right corner of the Arduino IDE
   - Or go to Tools > Serial Monitor
   - Set the baud rate to 9600

2. Enter numbers in the Serial Monitor:
   - Enter 0 or any number less than 2 (e.g., 1): The LED will turn ON
   - Enter any number greater than or equal to 2 (e.g., 2, 3, etc.): The LED will turn OFF

## Code Explanation

### Logical Operators
- **OR (||)**: The LED turns on if either condition (`num == 0` or `num < 2`) is true
- **AND (&&)**: Can be used to specify that both conditions must be true for an action to happen
- **NOT (!)**: Used to negate a condition (e.g., `if (!(num == 0))` means "if the number is NOT 0")

### Serial Communication
- `Serial.begin(9600)` initializes communication between the ESP32 and your computer
- `Serial.parseInt()` reads integer values from the serial port
- `Serial.print()` and `Serial.println()` send data to the serial monitor

### Control Flow
- The program waits for user input using `while (!Serial.available())`
- Uses logical operators to determine LED state based on input value
- Implements a simple delay between readings

## Learning Outcomes
- Understanding logical operators (AND, OR, NOT)
- Working with serial communication
- Implementing conditional statements
- Basic LED control
- User input handling
- Program flow control

## Troubleshooting
- If the LED doesn't respond, check your connections
- Make sure the Serial Monitor baud rate is set to 9600
- Verify the pin number matches your wiring
- Check if the ESP32 is properly powered
- Ensure the Serial Monitor is properly connected

