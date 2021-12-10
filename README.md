# VLCOM-AM
Arduino based amplitude-modulated Visual-Light-Communication

one-directional-serial-communication with blue led's as a transmitter of information
A photodiode in combination with an amplifier + schmitt-trigger makes the signal readable for the second arduino

The first Arduino in the schematic is used to create a carrier frequency of ~16kHz.
Any other circut that creates a high enough frequency at 5V should be suitable too.

recalculate electrical component-values of the passive frequency filters (Tiefpass + Hochpass) using this formula:

f = 1/(2 * Pi * R * C)

f~16kHz

https://youtu.be/_GZjcbSO8fE


