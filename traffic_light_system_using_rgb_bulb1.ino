// Traffic Light System Control using RGB Light

// Pin definitions for red, blue, and green LEDs
const int redPin = 4;
const int bluePin = 3;
const int greenPin = 2;

// Setup function to initialize serial communication and pin modes
void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set pin modes for red, blue, and green LEDs as outputs
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

// Function to control the traffic light sequence
void traffic_light() {
  // Red Light: Stop
  analogWrite(redPin, 255);  // Turn on red light (full brightness)
  analogWrite(bluePin, 0);   // Turn off yellow light
  analogWrite(greenPin, 0);  // Turn off green light
  Serial.println("STOP - Red light ON");
  delay(60000);  // Wait for 4 seconds

  // (Red + Green =) Yellow Light: Prepare to Go
  analogWrite(redPin, 255);  // Keep red light on
  analogWrite(bluePin, 0); // Turn on yellow light (full brightness)
  analogWrite(greenPin, 255);  // Turn off green light
  Serial.println("PREPARE - Red and Yellow lights ON");
  delay(60000);  // Wait for 4 seconds

  // Green Light: Go
  analogWrite(redPin, 0);   // Turn off red light
  analogWrite(bluePin, 0);   // Turn off yellow light
  analogWrite(greenPin, 255); // Turn on green light (full brightness)
  Serial.println("GO - Green light ON");
  delay(60000);  // Wait for 4 seconds
}

// Main loop to repeatedly execute the traffic light sequence
void loop() {
  Serial.println("TRAFFIC LIGHT SEQUENCE START");
  traffic_light();  // Execute the traffic light sequence
  delay(500);  // Wait for 1 second before restarting the sequence
  Serial.println("TRAFFIC LIGHT SEQUENCE END");
}