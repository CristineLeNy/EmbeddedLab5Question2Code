#include "msp430G2553.h"

void main(void)
{
    WDTCTL = WDTPW + WDTHOLD;
    P1DIR |= BIT6; // P1.6 to output
    P1OUT|=0x00;
    P1SEL |=BIT6;
    TACCR0 = 62500-1; // Set maximum count value (PWM Period
    TACCTL1=OUTMOD_7;//reset
    TACCR1 = 6249.9; // initialise counter compare value
    TACTL = TASSEL_2 +ID_3+MC_1; //sets period

    while (1)
    {
        P1OUT^=BIT6;
    }
}

