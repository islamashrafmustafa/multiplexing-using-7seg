/*
 * 32-two_7seg.c
 *
 * Created: 8/21/2022 9:47:26 AM
 * Author : Islam Ashraf Mustafa
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include "timer.h"
#include "seven segment.h"
#include "std_macros.h"

volatile unsigned char count1=0;
volatile unsigned char count2=0;
volatile unsigned char count3=0;

int main(void)
{
    timer_CTC_init_interrupt();
	seven_seg_vinit('D');
	SET_BIT(DDRA,0);
	SET_BIT(DDRA,1);
    while (1) 
    {
		SET_BIT(PORTA,0);
		CLR_BIT(PORTA,1);
		seven_seg_write('D',count2/10);
		while(count3==0);
		count3=0;
		SET_BIT(PORTA,1);
		CLR_BIT(PORTA,0);
		seven_seg_write('D',(count2%10));
		while(count3==0);
		count3=0;
		if (count1>100)
		{
			count2++;
			count1=0;
			if (count2==30)
			{
				count2=0;
			}
		}
    }
}

ISR (TIMER0_COMP_vect)
{
	count1++;
	count3=1;
}