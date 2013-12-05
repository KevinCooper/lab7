#include <msp430.h> 
#include "robotLibrary/robotLibrary.h"
#include "SensorLibrary/SensorLibrary.h"
#define FALSE 0
#define TRUE 1
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    P1DIR |= BIT0;
    P1DIR |= BIT6;
    //initRobot();
    //moveForward(30, 30);
    for(;;){
    	if(isCenterClose()==TRUE){
    		P1OUT |= BIT0;
    		P1OUT |= BIT6;
    	}else{
    		P1OUT &= ~BIT0;
    		P1OUT &= ~BIT6;
    	}
    	//while(isCenterClose() == FALSE){
    	//	moveForward(30, 30);
        //	while(isRightClose() == FALSE){
        //		halfRight();
        //	}
    	//}
    	//leftTurn();
    }


	return 0;
}
