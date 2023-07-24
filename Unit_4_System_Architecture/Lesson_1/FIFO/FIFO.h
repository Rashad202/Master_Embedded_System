/*
 * FIFO.h
 *
 *  Created on: 22 Jul 2023
 *      Author: Rashad
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"

// USER configuration
//select element type (uint32_t uint_8 unit_16 ..... )
#define  element_type uint8_t

// while creating buffer  set its width
#define width1 5
element_type uart_buffer[width1];

// FIFO data_types
typedef struct {
	     element_type *base;
		element_type *head; /* front */
		element_type *tail; /* rear */
		uint32_t length;
		uint32_t count;
}FIFO_Buf_t;

/* Status */
typedef enum {
	FIFO_NO_ERROR,
	FIFO_FULL,
	FIFO_NOT_FULL,
	FIFO_EMPTY,
	FIFO_NOT_EMPTY,
	FIFO_NULL
}FIFO_Status_t;
 //APS

FIFO_Status_t   FIFO_init                (FIFO_Buf_t *fifo_buf, element_type *buf, uint32_t length);
FIFO_Status_t   FIFO_enqueue             (FIFO_Buf_t *fifo_buf, element_type item );
FIFO_Status_t   FIFO_dequeue             (FIFO_Buf_t *fifo_buf, element_type *item );
FIFO_Status_t   FIFO_is_full             (FIFO_Buf_t *fifo_buf);
void            FIFO_print               (FIFO_Buf_t *fifo_buf);


#endif /* FIFO_H_ */
