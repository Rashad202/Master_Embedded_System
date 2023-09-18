/*
 * main.c
 *
 *  Created on: 17 Sep 2023
 *      Author: Rashad
 */
#include "BIT_MATH.h"
/* Group A Registers */
#define DDRA    		    *((volatile unsigned char*)0x3A)
#define PORTA	        	*((volatile unsigned char*)0x3B)


void wait(int x)
{
	unsigned int i,j;
	for(i=0;i<x;i++)
	for(j=0;j<255;j++);

}
void LED_ON (int x)
{
	SET_BIT(PORTA,x);
	wait(100);
}
void LED_OFF (int y)
{
	CLR_BIT(PORTA,y);
		wait(100);
}
void Buzzer_ON()
{
SET_BIT(PORTA,3);
wait(100);
}
void Buzzer_OFF()
{
	CLR_BIT(PORTA,3);
	wait(100);
}

void main ()
{
	//Make pins output
	DDRA =0xff;


	while(1)
	{

		for(unsigned char i=0;i<3;i++)
		{
			LED_ON(i);
			wait(100);
			LED_OFF(i);
		}
		Buzzer_ON();
		wait(100);
		Buzzer_OFF();

	}


}
