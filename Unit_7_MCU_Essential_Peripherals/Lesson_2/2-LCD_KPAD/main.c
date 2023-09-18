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
#include "HAL/KPAD/KPAD_Interface.h"
#include "avr/delay.h"


int main()
{
	LCD_voidInit();
	KPAD_voidInit();
	u8 Pressed;
	LCD_voidWriteString("Rashad Elsayed   ");
	_delay_ms(500);
	LCD_voidClearDisplay();
	LCD_voidWriteString("Welcome...................");
	_delay_ms(500);
	LCD_voidClearDisplay();
	while(1)
	{

		Pressed=KPAD_u8GetPressedKey();

		if(Pressed != 0Xff)
		{
			LCD_voidWriteChar(Pressed);

		}
	}

return 0;
}
