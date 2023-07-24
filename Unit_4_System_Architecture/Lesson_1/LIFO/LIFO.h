/*
 * LIFO.h
 *
 *  Created on: 22 Jul 2023
 *      Author: Rashad
 */
#ifndef LIFO_H_
#define LIFO_H_
#include "stdio.h"
#include "stdlib.h"

typedef struct {
	unsigned int length;
	unsigned int count ;
	unsigned int* base ;
	unsigned int* head ;
}LIFO_Buf_t ;

typedef enum {
	LIFO_No_error,
	LIFO_full,
	LIFO_empty,
	LIFO_null
}LIFO_status;


//APS
LIFO_status  LIFO_get_item(LIFO_Buf_t* lifo_buf , unsigned int* item ) ;
// pop items

LIFO_status  LIFO_init(LIFO_Buf_t* lifo_buf , unsigned int* buf , unsigned int length ) ;
// initalize lifo_buffer

LIFO_status  LIFO_Add_item(LIFO_Buf_t* lifo_buf , unsigned int item ) ;
// push items

#endif
