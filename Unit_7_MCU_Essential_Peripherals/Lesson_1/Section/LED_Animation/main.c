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



void main ()
{
	//Make pins output
	DDRA =0xff;
	while(1)
	{

		for(unsigned char i=0;i<8;i++)
		{
			SET_BIT(PORTA,i);
			wait(100);
		}
		wait(100);
		for( signed char j=7; j>=0;--j)
		{
			CLR_BIT(PORTA,j);
			wait(100);
		}

	}


}
