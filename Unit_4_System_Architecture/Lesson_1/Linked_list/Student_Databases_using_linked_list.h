/*
 * Student_Databases_using_linked_list.h
 *
 *  Created on: 24 Jul 2023
 *      Author: Rashad
 */

#ifndef STUDENT_DATABASES_USING_LINKED_LIST_H_
#define STUDENT_DATABASES_USING_LINKED_LIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <conio.h>
#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}

struct SData
{
	int id;
	char name[50];
	float height;
};
//linked list
struct Sstudent
{
	struct SData  student;
	struct Sstudent* PNext;
};

void fill_newstudent_Data(struct Sstudent* newstudent);
void Addstudent();
int delete_selected_id();
void View_students();
void DeleteAll();
void get_node_index(int index);
int get_length_Iterative();
int get_length_Recursive(struct Sstudent* list);
void get_node_index_from_end(int index);
void get_the_middle();
void reverse_all();

#endif /* STUDENT_DATABASES_USING_LINKED_LIST_H_ */
