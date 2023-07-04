#include <stdio.h>
int main()
{
    double a , b ,c;
      printf("Enter value of a: ");
      scanf("%lf",&a);
      printf("Enter value of b: ");
      scanf("%lf",&b);
        c=a;
        a=b;
        b=c;
      printf("After swapping, value of a = %lf\n",a);
      printf("After swapping, value of b = %lf ",b);
    return 0;
}
