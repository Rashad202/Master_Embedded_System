/*
 * Student_Databases_using_linked_list.c
 *
 *  Created on: 24 Jul 2023
 *      Author: Rashad
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <conio.h>

#include "Student_Databases_using_linked_list.h"
//linked list
#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}


struct Sstudent* gpFirststudent=NULL;
void fill_newstudent_Data(struct Sstudent* newstudent)
{
	char temp_data[50];
	DPRINTF("Enter new student id : ");
	gets(temp_data);
	newstudent->student.id= atoi(temp_data);

	DPRINTF("Enter new student name : ");
	gets(newstudent->student.name);

	DPRINTF("Enter new student height : ");
	gets(temp_data);
	newstudent->student.height= atof(temp_data);

}

void Addstudent()
{
	struct Sstudent* pNewstudent;
	struct Sstudent* plaststudent;
// check if list is empty
	if(gpFirststudent == NULL)
	{
		//create new record
		pNewstudent=(struct Sstudent*) malloc(sizeof(struct Sstudent));
		// assign to
		gpFirststudent = pNewstudent;
	}
	else // contain record
	{ // navigat until reach recod
		plaststudent =gpFirststudent;
		while(plaststudent->PNext)
			plaststudent = plaststudent->PNext;

		pNewstudent=(struct Sstudent*) malloc(sizeof(struct Sstudent));
		plaststudent->PNext =pNewstudent;

	}
	// fill new student data
			fill_newstudent_Data(pNewstudent);
			pNewstudent->PNext =NULL;
}



int delete_selected_id()
{
	char temp_text[40];
	int selected_id;

	DPRINTF("\n Enter id of student to be deleted : ");
	gets(temp_text);
	selected_id=atoi(temp_text);

	if(gpFirststudent)
	{
		struct Sstudent* pprevstudent =NULL;
		struct Sstudent* pselectedstudent=gpFirststudent;

		while(pselectedstudent)
		{
			if(pselectedstudent->student.id ==selected_id)
			{
				if(pprevstudent)
				{
					pprevstudent->PNext=pselectedstudent->PNext;
					}
				else
				{
					gpFirststudent =pselectedstudent->PNext;
				}
				free(pselectedstudent);
				return 1;
			}
			// store data
			pprevstudent =pselectedstudent;
			pselectedstudent =pselectedstudent->PNext;
		}


	}
	DPRINTF(" \n can't find this id");
	return 0;
}

void View_students()
{
	int count = 0;
	struct Sstudent* PCurrent =gpFirststudent;
	if(gpFirststudent == NULL)
	{
		DPRINTF("\n The List is empty. ");
	}
	while(PCurrent)
	{
		DPRINTF("\n Record Number %d",count+1);
		DPRINTF("\n\t ID : %d",PCurrent->student.id);
		DPRINTF("\n\t Name : %s",PCurrent->student.name);
		DPRINTF("\n\t Height : %0.2f\n",PCurrent->student.height);
		PCurrent = PCurrent->PNext;
		count++;
	}
}

void DeleteAll()
{
	struct Sstudent* PCurrent =gpFirststudent;

	if(gpFirststudent == NULL)
	{
		DPRINTF("\n The List is empty. ");
	}
	while(PCurrent)
	{
		struct Sstudent* PtempStudent = gpFirststudent;
		PCurrent = PCurrent->PNext;
		free(PtempStudent);
	}
	gpFirststudent = NULL;
}


void get_node_index(int index)
{
	if(gpFirststudent ==NULL ||index<0)
	{
			DPRINTF("\nThe List is Empty.\n");
	}
struct Sstudent * Ptemp =gpFirststudent;
int count =0;

while(Ptemp)
{
	if(count == index)
	{
		DPRINTF("\n Record Index %d",index);
		DPRINTF("\n\t ID : %d",Ptemp->student.id);
		DPRINTF("\n\t Name : %s",Ptemp->student.name);
		DPRINTF("\n\t Height : %0.2f\n",Ptemp->student.height);
	}
	Ptemp=Ptemp->PNext;
	count++;
}
}

int get_length_Iterative()
{
	if(gpFirststudent == NULL )
		{
			DPRINTF("\nThe List is Empty.\n");
		}
	struct Sstudent * Ptemp =gpFirststudent;
	int count =0;
	while(Ptemp)
		{
		if(Ptemp->PNext == NULL)
				{
					break;
				}
			Ptemp = Ptemp->PNext;
			count++;
		}
return count;
}

int get_length_Recursive(struct Sstudent* list)
{
	if(gpFirststudent == NULL )
		{
			DPRINTF("\nThe List is Empty.\n");
		}
	if(list == NULL)
		{
			return 0;
		}
		else
		{
			return 1+get_length_Recursive(list->PNext);
		}
}
void get_node_index_from_end(int index)
{
	if(gpFirststudent == NULL || index < 0)
		{
			DPRINTF("\nThe List is Empty.\n");
		}
	struct Sstudent * Pcount =gpFirststudent;
	struct Sstudent * Ptemp =gpFirststudent;
	// Move reference pointer by the desired offset from main pointer

	for(;index--;Pcount=Pcount->PNext)
		{
		    if(Pcount == NULL)
			{
				DPRINTF("\n failed to get node from the end\n");
				return ;
			}
		}
	// Move main & ref pointer relatively one by one
	if((Pcount->PNext) !=NULL)
	{
		Ptemp=Ptemp->PNext;
		Pcount=Pcount->PNext;
	}

	DPRINTF("\n Record Index (%d) from end ",index);
	DPRINTF("\n\t ID : %d",Ptemp->student.id);
	DPRINTF("\n\t Name : %s",Ptemp->student.name);
	DPRINTF("\n\t Height : %0.2f\n",Ptemp->student.height);

}
void get_the_middle()
{
	if(gpFirststudent == NULL )
	{
		DPRINTF("\nThe List is Empty.\n");
	}
	int total_node =0;
	total_node=get_length_Iterative();
	get_node_index(total_node/2);
}

void reverse_all()
{
	if(gpFirststudent == NULL )
	{
		DPRINTF("\nThe List is Empty.\n");
	}
	struct Sstudent *PPrev = NULL;
	struct Sstudent *PCurrent = gpFirststudent;
	struct Sstudent *PNext = NULL;
	/* if PCurrent get the last node in the list */
	while(PCurrent != NULL)
	{
		PNext = PCurrent->PNext;
		PCurrent->PNext = PPrev;
		PPrev = PCurrent;
		PCurrent = PNext;
	}

	gpFirststudent = PPrev;
}

