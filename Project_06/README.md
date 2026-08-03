# Project 06 - Phototransistor-Controlled Piezo

Arduino project using a phototransistor to control the pitch of a piezo speaker.

The Arduino calibrates the phototransistor during the first five seconds after startup by recording the minimum and maximum light levels detected. Once calibration is complete, the Arduino continuously reads the phototransistor through analog input A0, maps the measured light intensity to a frequency between 50–4000 Hz, and outputs the corresponding tone through a piezo speaker connected to digital pin 8. An onboard LED connected to pin 13 indicates the calibration period by remaining illuminated until calibration is complete. A potentiometer wired in series with the piezo speaker functions as a variable resistor, allowing the output volume to be adjusted independently of the pitch.

## Project Files

* **Arduino Sketch** - code used to calibrate the phototransistor and generate piezo tones
* **Circuit Photos** - photo of completed circuit and circuit diagram
* **Circuit Videos** - video of light-controlled piezo pitch with adjustable volume
