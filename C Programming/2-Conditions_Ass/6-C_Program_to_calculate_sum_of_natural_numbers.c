#include <stdio.h>
int main()
{
    int x;
        printf("Emter an integer: ");
        scanf("%d",&x);
    int sum=0;
    for (int i=1;i<=x;i++)
    {
        sum+=i;
    }
    
    printf("Sum = %d",sum);
    return 0;
}
