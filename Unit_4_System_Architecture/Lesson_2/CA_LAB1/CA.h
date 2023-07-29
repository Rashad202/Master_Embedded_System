/*
 * CA.h
 *
 *  Created on: 28 Jul 2023
 *      Author: Rashad
 */

#ifndef CA_H_
#define CA_H_
#include "STATE.h"

extern void (*pCA_state)();
/* Define States */
enum{
	CA_waiting,
	CA_driving
}CA_State_ID;

/* Declare State Functions of CA */

STATE_define(CA_waiting ); 	//void ST_CA_waiting();
STATE_define(CA_driving ); 	//void ST_CA_driving();

#endif /* CA_H_ */
