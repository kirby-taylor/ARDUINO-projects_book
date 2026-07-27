// PROJECT 05- Servo Control with Potentiometer
// Reads potentiometer position and maps the input to servo angle
// Decoupling capacitors reduce power fluctuations from servo operation
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Import servo library
#include <Servo.h>

// Create servo object
Servo myServo;

// Set variables
int const potPin = A0;                            // identifies analog pin connected to potentiometer

int potVal;                                       // stores potentiometer reading
int angle;                                        // stores servo angle

// Setup servo and serial monitor
void setup(){
  myServo.attach(9);                              // indicate pin servo is attached to
  Serial.begin(9600); }                           // include a serial connection to monitor potentiometer values and servo angles

// Read potentiometer value
void loop () {
  potVal = analogRead(potPin);                    // read analog value
  Serial.print("; potVal: ");                       // print to serial monitor
  Serial.println(potVal);

  // Map potentiometer value to servo values
  angle = map(potVal, 0, 1023, 0, 179);           // map potentiometer range (0-1023) to servo range (0-179)
  Serial.print("Angle:");
  Serial.print(angle);                            // display servo angle

  // Rotate servo
  myServo.write(angle);                           // move servo to mapped angle
  delay(15); }                                    // allow servo time to move
