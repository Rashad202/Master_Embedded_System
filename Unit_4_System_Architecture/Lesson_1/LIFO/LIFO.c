/*
 * LIFO.c
 *
 *  Created on: 22 Jul 2023
 *      Author: Rashad
 */
#include "LIFO.h"
#include "stdio.h"
#include "stdlib.h"
LIFO_status  LIFO_init(LIFO_Buf_t* lifo_buf , unsigned int* buf , unsigned int length )
// initalize lifo_buffer
{
	if(buf  == NULL)
		return LIFO_null;

	lifo_buf->base =buf;
	lifo_buf->head=buf;
	lifo_buf->length=length;
	lifo_buf->count=0;
	return LIFO_No_error;

}
LIFO_status  LIFO_Add_item(LIFO_Buf_t* lifo_buf , unsigned int item )
// push items
{
	// check lifo is valid or not
	if(!lifo_buf->base|| !lifo_buf->head)
		return LIFO_null;

	// check lifo is full or not
	if(lifo_buf->count == lifo_buf->length)
		return LIFO_full;
	*(lifo_buf->head)= item;
	lifo_buf->head++;
	lifo_buf->count++;
	return LIFO_No_error;
}
LIFO_status  LIFO_get_item(LIFO_Buf_t* lifo_buf , unsigned int* item )
// pop items
{
	// check lifo is valid or not
		if(!lifo_buf->base|| !lifo_buf->head)
			return LIFO_null;

		// check lifo is empty or not
		if(lifo_buf->count == 0)
			return LIFO_empty;

		lifo_buf->head--;
		*item=*(lifo_buf->head);
		lifo_buf->count--;
		return LIFO_No_error;
}
