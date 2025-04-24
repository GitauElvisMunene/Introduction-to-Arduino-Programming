//Logical Operators AND, OR NOT

#define led 19

void setup(){
Serial.begin(9600); // Initialize serial communication at 9600 baud
pinMode(led,OUTPUT);
}

void loop() {
  int num;
  // Prompt the user for input
  Serial.println("Enter a number: ");
  // Read input from the user
  while (!Serial.available()); // Wait until data is available
  num = Serial.parseInt(); // Read the integer value from the serial port
  // Print the input to the serial monitor
  Serial.print("You entered: ");
  Serial.println(num);
  if(num==0||num<2){
    digitalWrite(led, HIGH);
    
  }else{
    digitalWrite(led, LOW);
  }

  // Wait for a moment before reading the next input
  delay(1000);
}
