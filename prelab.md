#Prelab
##Sensor Voltage Levels
The center sensor seems to be working correctly.  The correct voltage leve I would use, based off a 4" distance from a white wall in full lighting is .42V.<br>
The voltage level for the left sensor in the same lighting would be 1.8V<br>
The voltage level for the right sensor in the same lighting would be about 1.2V.##Setup
The center and right captures will be taken back to back.  First, the input will be set to A4 and the PA.1 ADC option will be selected.  The Clock for it will be set to the SMCLK, which will be set at 1MHZ.  The sample and conversion sequence will be run, with the results being stored in a moving average.  Once done, it will be disable and the ADC10 will be set up to take a measurement of the right sensor through the A5 input.
##Hardware Interface
For this lab, only the right and center sensor will be used.  This will still allow for completion of the maze by using a simple right wall following algorithm.  to do this, the A4 and A5 inputs for the ADC10 will be used.  These two correspond to pin 1.4 and 1.5 on the MSP430, both of which are free in my implementation of the robot movement library.
##Design
Due to the relatively short amount of time that the samples take in comparison to the time that the robot runs, the code will be run off blocking.  However, interrupts will be considered depending on the ease of conversion from a delay based to low power interrupt based method of ADC10 measurements.<br>
<br>
A interrupt design might be better, since it would allow for easier measurements to be taken while the robot is actively moving. Potentially.
