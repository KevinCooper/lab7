#include <msp430.h> 
#include "robotLibrary/robotLibrary.h"
#include "SensorLibrary/SensorLibrary.h"
#define FALSE 0
#define TRUE 1
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	P1DIR |= (BIT0|BIT6);

	for (;;) {
		if (isLeftClose() == TRUE) {
			P1OUT |= BIT0;
		} else {
			P1OUT &= ~BIT0;
		}
		if (isRightClose() == TRUE) {
			P1OUT |= BIT6;
		} else {
			P1OUT &= ~BIT6;
		}
	}

	return 0;
}
