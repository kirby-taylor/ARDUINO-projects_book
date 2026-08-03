// PROJECT 06- PHOTOTRANSISTOR-CONTROLLED PIEZO
// Calibrates input from phototransistor
// Then maps phototransistor input to piezo
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Set variables
int sensorValue;                                  // stores analog reading from phototransistor
int sensorLow = 1023;                             // stores lowest calibration value
int sensorHigh = 0;                               // stores highest calibration value

// Set constants
const int ledPin = 13;                            // indicates calibration status

// Setup calibration indicator
void setup() {
  pinMode(ledPin, OUTPUT);                        // configure LED pin as output
  digitalWrite(ledPin, HIGH);                     // turn LED on during calibration

  // Calibrate sensor for first five seconds
  while (millis() < 5000) {
    sensorValue = analogRead(A0);                 // read phototransistor value

    // Update maximum sensor reading
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;}

    // Update minimum sensor reading
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;}}

  digitalWrite(ledPin, LOW); }                    // turn LED off when calibration is complete

// Read sensor value and generate pitch
void loop() {
  sensorValue = analogRead(A0);                   // read current light level

  // Map sensor value to piezo frequency
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);

  // Play mapped frequency
  tone(8, pitch, 20);                             // output tone for 20 ms
  delay(10); }                                    // short delay before next reading

    