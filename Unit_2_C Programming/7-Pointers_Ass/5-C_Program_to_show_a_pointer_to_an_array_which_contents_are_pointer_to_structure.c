/*************************************************************************************************************
 Assignment  : EX5_C_Program_to_show_a_pointer_to_an_array_which_contents_are_pointer_to_structure.c
 Author      : Mahmoud Karem Zamel
 Date  		 : Jul 15 - 2022
*************************************************************************************************************/

#include <stdio.h>

struct S_Employee
{
	char* Name;
	int   ID;
};

void main ()
{
	
	struct S_Employee e1 = {"Ahmed",100} , e2 = {"Ali",200};
	
	struct SEmployee(*arr[])={&e1,&e2};
	
	struct S_Employee * (*ptr)[2] =&arr;
    printf("\nEmployee Name : %s \n",(*(*ptr))->Name);
	printf("Employee ID :  %d \n",(*(*ptr))->ID);
	printf("\n\n");
	printf("\nEmployee Name : %s \n",(*(*ptr+1))->Name);
	printf("Employee ID :  %d \n",(*(*ptr+1))->ID);
	
}

