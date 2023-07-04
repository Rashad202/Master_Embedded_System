#include <stdio.h>
int fact(int x);
int main()
{
 int a,b;
    printf("Enter an positive integer : ");
    scanf("%d",&a);
    if(a>0)
    {
        b=fact(a);
        printf("Factorial of %d = %d",a,b);
    }
    else
        printf("Error number !!! Reenter number again.");
}

int fact(int x)
{
    if( x!=1)
     return x*fact( x-1);
}
