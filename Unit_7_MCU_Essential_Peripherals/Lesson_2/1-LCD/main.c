/*
 * main.c
 *
 *  Created on: 19 Sep 2023
 *      Author: Rashad
 */


#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"
#include "MCAL/DIO/DIO_Interface.h"
#include "HAL/LCD/LCD_Interface.h"
#include "avr/delay.h"


int main()
{
	LCD_voidInit();
	u8 nam[16]="Rashad Elsayed ";
	LCD_voidWriteString("Rashad Elsayed ");
	_delay_ms(250);
	LCD_voidClearDisplay();
	_delay_ms(100);
	for(u8 i=0;i<15;i++)
	{
		LCD_voidWriteChar(nam[i]);
		_delay_ms(100);
	}
	while(1);

return 0;
}
