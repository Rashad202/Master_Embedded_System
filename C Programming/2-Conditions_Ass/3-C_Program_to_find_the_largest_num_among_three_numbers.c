
#include <stdio.h>
int main()
{
    double a , b ,c;
      printf("Enter three numbers ");
      scanf("%lf %lf %lf",&a,&b,&c);
      
       if (a>b && a>c)
       {
           printf("Largest number  = %0.2lf\n",a);
       }
       else if (c>a && c>b)
       {
           printf("Largest number  = %0.2lf\n",c);
       }
       else if (b>a && b>c)
       {
           printf("Largest number  =%0.2lf\n",b);
       }
       
    return 0;
}
