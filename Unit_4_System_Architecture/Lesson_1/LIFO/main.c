/*
 * main.c
 *
 *  Created on: 22 Jul 2023
 *      Author: Rashad
 */
#include "LIFO.h"
#include "stdio.h"
#include "stdlib.h"
unsigned int buffer1[5];

void main ()
{
	int i, temp=0;

LIFO_Buf_t uart_lifo , i2c_lifo;

// static allocation
LIFO_init(&uart_lifo, buffer1, 5);

// dynamic allocation
unsigned int* buffer2 =(unsigned int*) malloc(5*sizeof(int));
LIFO_init(&i2c_lifo , buffer2 , 5);


for (i=0 ;i<5;i++)
{
	if(LIFO_Add_item(&uart_lifo, i ) == LIFO_No_error)
		printf(" UART_LIFO_add : %d  \n ",i);
}
printf("\n");
for (i=0 ;i<5;i++)
{
	if(LIFO_get_item(&uart_lifo, &temp ) == LIFO_No_error)
		printf("UART_LIFO_get : %d  \n ",temp);
}
}

