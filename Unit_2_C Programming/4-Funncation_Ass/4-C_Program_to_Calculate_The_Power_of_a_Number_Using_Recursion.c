#include <stdio.h>
#include <math.h>

int power(int x,int y);

int main()
{
    int a ,b;
    printf("Enter base number : ");
    scanf("%d",&a);
    printf("Enter power number : ");
    scanf("%d",&b);
    printf("%d^%d = %d",a,b,power(a,b));
    
    return 0;
}

int power(int x,int y)
{
    if(y !=0)
    return (x * pow(x,y-1));
    else
    return 1;
}
