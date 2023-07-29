/*
 * CA.c
 *
 *  Created on: 28 Jul 2023
 *      Author: Rashad
 */

#include "CA.h"

int US_Get_Distance_Random (int l , int r , int count);
/* 1.Variables */
static int CA_speed=0 ;
static int CA_distance=0 ;
static int CA_threshold=50 ;

/* 2.STATE Pointer to func */
void (*pCA_state)();

/* 3.Definition of states/func */
STATE_define(CA_waiting)
{
	// State_Name
	CA_State_ID=CA_waiting;

	//State_Action
	CA_speed=0;
	// DC_Motor(CA_speed) Calling DC_Motor func to stop the motor

	// Event_Check
	//US_Get_Distance(CA_distance)
	CA_distance = US_Get_Distance_Random (45,55,1);
	( CA_distance <= CA_threshold ) ? (pCA_state = STATE(CA_waiting)) : (pCA_state = STATE(CA_driving));

	printf ("CA_Waiting state : distance=%d  speed=%d \n" ,CA_distance,CA_speed );

}
STATE_define(CA_driving)
{
	// State_Name
	CA_State_ID=CA_driving;

	//State_Action
	CA_speed=30;
	// DC_Motor(CA_speed) Calling DC_Motor func to stop the motor

	// Event_Check
	//US_Get_Distance(CA_distance)
	CA_distance = US_Get_Distance_Random (45,55,1);
	(CA_distance <= CA_threshold) ? (pCA_state = STATE(CA_waiting)) : (pCA_state = STATE(CA_driving));

	printf ("CA_Driving state : distance=%d  speed=%d \n" ,CA_distance,CA_speed );

}


/***************************************************************/

int US_Get_Distance_Random (int l , int r , int count)
{
	/* Generate one(count) random number in the range [l:r] */
	int i,rand_num;
	for (i=0 ; i<count ; i++)
	{
		rand_num = (rand() % (r - l + 1 )) + l ;
	}
	return rand_num;
}


