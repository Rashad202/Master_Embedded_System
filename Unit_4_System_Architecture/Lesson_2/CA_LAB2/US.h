/*
 * US.h
 *
 *  Created on: 29 Jul 2023
 *      Author: Rashad
 */

#ifndef US_H_
#define US_H_
#include "state.h"

extern void (*pUS_state)();


/* Define States */
enum {
	US_BUSY
}US_State_ID;

/* Declare State Functions of US */
STATE_define(US_busy);  //void ST_US_busy();

/* INIT */
void US_Init();


#endif /* US_H_ */
