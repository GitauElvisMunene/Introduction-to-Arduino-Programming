# Blink an LED Using Functions

## Objective
In this project, you will use a custom function to control how many times an LED blinks. The LED will blink multiple times with different blink counts, demonstrating how functions help structure your code.

## Materials Needed
- ESP32 development board
- LED
- Resistor (220Ω)
- Jumper wires
- Breadboard
- USB cable (for connecting the ESP32 to your computer)
- Arduino IDE installed on your computer

## Hardware Setup
1. Connect the LED:
   - Connect the negative leg (cathode) of the LED to GND of the ESP32
   - Connect a 100Ω resistor between the positive leg (anode) of the LED and digital pin 19 of the ESP32

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
After the code is uploaded, the LED will:
1. Blink 5 times, pause for 1 second
2. Blink 3 times, pause for 1 second
3. Blink 2 times, and then the loop will stop as the exit(0) command terminates the program

## Code Explanation

### Functions
- `blinkLED(int count)` is a custom function that makes the LED blink a specified number of times
- It takes an integer argument `count` to control how many times the LED blinks
- Inside the function, a for loop runs `count` times, turning the LED on and off with a delay between each cycle

### Modular Code
- By using a function, the code becomes cleaner and more modular
- You can call `blinkLED()` with different arguments to control how many times the LED blinks without duplicating code

### Program Termination
- The `exit(0)` command is used to terminate the program after the blinking sequences
- This will stop the loop from running continuously

## Learning Outcomes
- Understanding function creation and usage
- Implementing for loops
- Working with delays
- Basic LED control
- Program flow control
- Using digital pins

## Troubleshooting
- If the LED doesn't blink, check your connections
- Make sure the resistor is properly connected
- Verify the pin number matches your wiring
- Check if the ESP32 is properly powered

