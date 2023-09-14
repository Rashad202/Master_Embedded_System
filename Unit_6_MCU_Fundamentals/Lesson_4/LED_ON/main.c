/*
 * main.c
 *
 *  Created on: 14 Sep 2023
 *      Author: Rashad
 */


#include "BIT_MATH.h"
#include "platform_Types.h"

#include "avr/io.h"
#include "avr/delay.h"
#include "avr/interrupt.h"

void init_INT(void);
void EN_INT(void);
void init_GPIO(void);
void EXTI_ClearFlag( uint8 Copy_uint8Line );



void main()
{
	init_GPIO();
	init_INT();
	EN_INT();


	while(1)
	{

		CLR_BIT(PORTD,5);
		CLR_BIT(PORTD,6);
		CLR_BIT(PORTD,7);

	}

}
void EXTI_ClearFlag ( uint8 Copy_uint8Line )
{
	SET_BIT( GIFR , Copy_uint8Line );
}
void init_GPIO(void)
{
	//input
	CLR_BIT(DDRD,2);
	CLR_BIT(DDRD,3);
	CLR_BIT(DDRB,2);

	// LED
	SET_BIT(DDRD,5);
	SET_BIT(DDRD,6);
	SET_BIT(DDRD,7);
}

void init_INT(void)
{
	// EN INT0 Rising Edge/Falling edge
		SET_BIT(MCUCR,ISC00);
		CLR_BIT(MCUCR,ISC01);
	// EN INT1 Rising Edge/Falling edge
		SET_BIT(MCUCR,ISC10);
		CLR_BIT(MCUCR,ISC11);
	// EN INT2 Rising Edge
		SET_BIT(MCUCSR,ISC2);

}
void EN_INT(void)
{
	SET_BIT(SREG, 7);
	//EN General Interrupt Control Register –GICR
	SET_BIT(GICR,INT0);
	SET_BIT(GICR,INT1);
	SET_BIT(GICR,INT2);
}


/* ISR --> Implementation */
void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
	EXTI_ClearFlag( INTF0 );
	// Turn led on
	PORTD  |= (1<<5);

	// Wait 1 second
	_delay_ms(1000);

	// Turn led off
	PORTD  &= (~1<<5);


}

void __vector_2(void) __attribute__((signal));
void __vector_2(void)
{
	EXTI_ClearFlag( INTF1 );
	// Turn led on
	PORTD  |= (1<<6);

	// Wait 1 second
	_delay_ms(1000);

	// Turn led off
	PORTD  &= (~1<<6);


}

void __vector_3(void) __attribute__((signal));
void __vector_3(void)
{
	EXTI_ClearFlag( INTF2 );
	// Turn led on
	PORTD  |= (1<<7);

	// Wait 1 second
	_delay_ms(1000);

	// Turn led off
	PORTD  &= (~1<<7);

}
