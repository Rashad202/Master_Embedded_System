#include <stdio.h>
#include <string.h>


void main ()
{
	int size;
	printf("Enter the number of elements to store in the array (max 15) :");
	scanf("%d",&size);
	printf("Input %d number of elements in the array :\n",size);
	int x[size];
	int* ptr;
    ptr=&x[0];
	for(int i=0;i<size;i++,ptr++)
	{
	    printf("element - %d :",i+1);
	    scanf("%d",ptr);
	}
	ptr=&x[size-1];
	printf("The elements of array in reverse order are :\n");
    for(int i=size;i>0;i--)
	{
	    printf("element - %d : %d \n",i,*ptr);
	    *ptr--;
	    
	}
    
    
}
