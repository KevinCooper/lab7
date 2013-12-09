#include <msp430.h> 
#include "robotLibrary/robotLibrary.h"
#include "SensorLibrary/SensorLibrary.h"
#include "clock/clock.h"
#define FALSE 0
#define TRUE 1
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	P1DIR |= (BIT0|BIT6);

	slowClock();


	for (;;) {
		if (isLeftClose() == FALSE) {
			P1OUT |= BIT0;
		} else {
			P1OUT &= ~BIT0;
		}
		if (isRightClose() == FALSE) {
			P1OUT |= BIT6;
		} else {
			P1OUT &= ~BIT6;
		}
	}

	return 0;
}



slowClock(){
	BCSCTL1 &= ~(BIT0 + BIT1 + BIT2 + BIT3);  //Clear the RSEL
	DCOCTL &= ~(BIT5 + BIT6 + BIT7);   // Clear the DCO
}
