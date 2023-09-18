#include "util/delay.h"
#include "BIT_MATH.h"

#include "BIT_MATH.h"
/* Group A Registers */
#define DDRA    		    *((volatile unsigned char*)0x3A)
#define PORTA	        	*((volatile unsigned char*)0x3B)
/* Group B Registers */
#define DDRB    		    *((volatile unsigned char*)0x37)
#define PORTB	        	*((volatile unsigned char*)0x38)
#define PINB	        	*((volatile unsigned char*)0x36)


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
	DDRB=0X00;
	while(1)
	{
		if(GET_BIT(PINB,0)==1)
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
					while((GET_BIT(PINB, 0) == 1));
		}


	}


}
