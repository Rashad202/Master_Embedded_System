/*
 * DC.h
 *
 *  Created on: 29 Jul 2023
 *      Author: Rashad
 */

#ifndef DC_H_
#define DC_H_
#include "state.h"

extern void (*pDC_state)();


/* Define States */
enum {
	DC_IDLE,
	DC_BUSY
}DC_State_ID;

/* Declare State Functions of DC */
STATE_define(DC_idle);  //void ST_DC_idle();
STATE_define(DC_busy);  //void ST_DC_busy();


/* INIT */
void DC_Init();



#endif /* DC_H_ */
