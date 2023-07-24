/*
 * FIFO.c
 *
 *  Created on: 22 Jul 2023
 *      Author: Rashad
 */

#include "FIFO.h"

FIFO_Status_t   FIFO_init                (FIFO_Buf_t *fifo_buf, element_type* buf, uint32_t length)
{
	if(buf == NULL)
		return FIFO_NULL;

	fifo_buf->base =buf;
	fifo_buf->head =buf;
	fifo_buf->tail =buf;
	fifo_buf->length =length;
	fifo_buf->count =0;

	return FIFO_NO_ERROR;
}

FIFO_Status_t   FIFO_enqueue             (FIFO_Buf_t *fifo_buf, element_type item )
{
	if( !fifo_buf->base || !fifo_buf->head || !fifo_buf->tail )
		return  FIFO_NULL;

 	if (FIFO_is_full(fifo_buf) == FIFO_FULL)
		return FIFO_FULL;
	*(fifo_buf->head)= item	;
	fifo_buf->count++;
	if (fifo_buf->head == fifo_buf->base +(fifo_buf->length )*(sizeof(element_type)) )
		fifo_buf->head== fifo_buf->base;
	else
		fifo_buf->head++;

	return FIFO_NO_ERROR;

}
FIFO_Status_t   FIFO_dequeue             (FIFO_Buf_t *fifo_buf, element_type *item )
{
	if( !fifo_buf->base || !fifo_buf->head || !fifo_buf->tail )
		return  FIFO_NULL;
    if(fifo_buf->count ==0)
    	return FIFO_EMPTY;

    *item =*(fifo_buf->tail);
	fifo_buf->count--;
	if (fifo_buf->tail == fifo_buf->base +(fifo_buf->length )*(sizeof(element_type)) )
			fifo_buf->tail== fifo_buf->base;
		else
			fifo_buf->tail++;

	return FIFO_NO_ERROR;
}

FIFO_Status_t   FIFO_is_full             (FIFO_Buf_t *fifo_buf)
{
	if( !fifo_buf->base || !fifo_buf->head || !fifo_buf->tail )
			return  FIFO_NULL;
	if (fifo_buf->count == fifo_buf->length)
		return FIFO_FULL;
	else
		return FIFO_NO_ERROR;


}
void            FIFO_print               (FIFO_Buf_t *fifo_buf)
{
	element_type * temp;
	int i=0;
	if(fifo_buf->count ==0)
		printf("fifo is empty\n");
	else
	{
		temp =fifo_buf->tail;
		printf("\n---------fifo print ------------\n");

		for(i=0;i<fifo_buf->count; i++)
		{
			printf("\t  %x  \n ", *temp);
			temp++;
		}
		printf("---------------------\n");
	}

}
