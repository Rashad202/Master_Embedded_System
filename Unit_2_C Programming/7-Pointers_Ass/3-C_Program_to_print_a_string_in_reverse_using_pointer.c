#include <stdio.h>
#include <string.h>


void main ()
{
	char String[50];
	char *ptr = NULL;
	int len,i ;
	printf ("Enter a string: ");
	gets(String);
	len =strlen(String);
	ptr = (String+len) ;
	
	printf ("Reverse of the string is : ");
	for (i=0 ; i<=len ; i++)
	{
		printf ("%c",*ptr);
		ptr--;
	}

}