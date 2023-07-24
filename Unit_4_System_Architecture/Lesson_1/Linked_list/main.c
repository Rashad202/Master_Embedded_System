/*
 * main.c
 *
 *  Created on: 24 Jul 2023
 *      Author: Rashad
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <conio.h>

#include "Student_Databases_using_linked_list.h"

#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}


int main(void)
{
	char temp_text[40];
	int num=0;
	struct Sstudent * gp_Student = NULL ;
	while(1)
	{
		DPRINTF("\n================================= Welcome to our Students DataBase =============================================");
		DPRINTF("\n Choose One of the following Options :- \n");
		DPRINTF("\n\t 1 : Add Student.");
		DPRINTF("\n\t 2 : Delete Student.");
		DPRINTF("\n\t 3 : View Students.");
		DPRINTF("\n\t 4 : Delete All.");
		DPRINTF("\n\t 5 : Get Specific Node.");
		DPRINTF("\n\t 6 : Count The Students (Iterative ).");
		DPRINTF("\n\t 7 : Count The Students (Recursive Method).");
		DPRINTF("\n\t 8 : Get Specific Node (from the end).");
		DPRINTF("\n\t 9 : Get The Middle Student.");
		DPRINTF("\n\t 10: Reverse All Students.");
		DPRINTF("\n Enter an option number: ");

		gets(temp_text);
		switch(atoi(temp_text))
		{
			case 1:
				Addstudent();
				break;

			case 2:
				delete_selected_id();
				break;

			case 3:
				View_students();
				break;

			case 4:
				DeleteAll();
				break;
			case 5:
				DPRINTF("Enter Node's number :");
				gets(temp_text);
				 num = atoi(temp_text);
				get_node_index( num);
				break;
			case 6:
				num = get_length_Iterative();
				DPRINTF("Student Numbers : %d\n", num);
				break;
			case 7:
				num = get_length_Iterative(gp_Student);
				DPRINTF("Student Numbers : %d\n", num);
				break;
			case 8:
				DPRINTF("Enter Node's number from end :");
				gets(temp_text);
				num = atoi(temp_text);
				get_node_index_from_end( num);
				break;
			case 9:
				get_the_middle();
				break;
			case 10:
				reverse_all();
				break;
			default:
				DPRINTF("\n Invalid Option ... Try Again ... \n\n");
				break;
		}
	}
	return 0;
}



