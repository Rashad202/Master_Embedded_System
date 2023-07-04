#include <stdio.h>
union job
{
	char name [32] ;
	float salary;
	int worker_no;
}u;
struct job1
{
	char name [32];
	float salary;
	int worker_no;
}s;

int main ()
{
	printf ("Size of the union is: %d", sizeof (u));
	printf ("\nSize of the structure is: %d", sizeof (s));

	return 0;
}

/**********************************************
  Size of the union is: 32
  Size of the structure is: 40                        
**********************************************/