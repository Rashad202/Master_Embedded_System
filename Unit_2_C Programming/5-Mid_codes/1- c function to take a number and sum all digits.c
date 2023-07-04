#include <stdio.h>
#include <stdlib.h>
int sum (int x);
int main() {
	int num ;
	int sum;
	 printf("Enter number :");
	 scanf("%d",&num);
	 sum=sum_digit(num);
printf("sum_digits = %d",sum);
    
}

int sum_digit (int y)
{
    int a,b;
    while(y!=0)
    {
        a=y%10;
        b+=a;
        y/=10;
    }
    return b;
}