# Project 05 - Potentiometer-Controlled Servo Motor

Arduino project using a potentiometer to control the position of a servo motor.

The Arduino reads the potentiometer through analog input A0, maps the input value to a servo angle from 0–179°, and sends the corresponding control signal to the servo through digital pin 9. Decoupling capacitors are used across the power supply to help stabilize the circuit.

## Project Files

- **Arduino Sketch** - code used to read the potentiometer and control the servo
- **Circuit Photos** - physical circuit and component connections
- **Circuit Videos** - demonstration of potentiometer-controlled servo movement
- **Serial Monitor** - output showing potentiometer readings and mapped servo angles
- **LTspice** - circuit schematic and simulation of potentiometer input and servo control signal

## LTspice Simulation

The `LTspice` folder contains the circuit schematic, custom component models, simulation files, waveform results, and a separate README describing the simulation.
