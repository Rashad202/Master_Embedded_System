/*
 * main.c
 *
 *  Created on: 22 Jul 2023
 *      Author: Rashad
 */
#include "FIFO.h"

void main()
{
	FIFO_Buf_t FIFO_UART;
	element_type i ,temp=0;
	if(FIFO_init(&FIFO_UART, uart_buffer ,5)== FIFO_NO_ERROR)
		printf("FIFO  init ..........Done \n");
	for(i=0 ;i<7;i++)
	{
		printf("FIFO Enqueue (%x) \n",i);
		if(FIFO_enqueue(&FIFO_UART , i) == FIFO_NO_ERROR )
			printf("FIFO  enqueue  %x..........Done \n",i);
		else
			printf("FIFO  enqueue %x..........Fail \n",i);
	}
	FIFO_print(&FIFO_UART);


			if(FIFO_dequeue(&FIFO_UART ,  &temp) == FIFO_NO_ERROR )
				printf("FIFO  dequeue  : Data= %X\n",temp);
			if(FIFO_dequeue(&FIFO_UART ,  &temp) == FIFO_NO_ERROR )
				printf("FIFO  dequeue  : Data= %X\n",temp);
		FIFO_print(&FIFO_UART);

}

