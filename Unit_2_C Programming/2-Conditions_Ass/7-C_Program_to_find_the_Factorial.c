#include <stdio.h>
int main()
{
    int x;
        printf("Enter an integer: ");
        scanf("%d",&x);
    int factorial=1;
    if(x >= 0)
    {
        if(x==0)
        {
            printf("Factorial = 1 ");
        }
        else
        {
            for (int i=x;i>=2;--i)
            {
                factorial*=i;
            }
            printf("Factorial = %d",factorial);
        }
    }
    else
        printf("Error!!! Factorial of negative number doesn't exist. ");
    return 0;
}