#include <stdio.h>
#define pi 3.14
#define area(r) pi*(r*r)
int main()
{
    int radis;
    float area;
    printf("Enter the radis: ");
    scanf("%d",&radis);
    area=area(radis);
    printf("Area=%0.2f",area);
    return 0;
}
