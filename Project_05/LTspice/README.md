# LTspice Simulation

LTspice was used to recreate the Project 05 circuit and simulate the relationship between potentiometer position and the servo control signal.

Custom potentiometer and servo symbols/models were created for the simulation. The schematic includes the simulation instructions, with the resulting waveform and measurements included here for reference.

## Results

| Pot Position | D9 Pulse Width |
|-------------:|---------------:|
| 10% | 1.101 ms |
| 20% | 1.201 ms |
| 30% | 1.301 ms |
| 40% | 1.401 ms |
| 50% | 1.501 ms |
| 60% | 1.601 ms |
| 70% | 1.701 ms |
| 80% | 1.801 ms |
| 90% | 1.901 ms |

As the potentiometer position increased, the simulated D9 pulse width increased proportionally, representing the changing servo position commanded by the Arduino.
