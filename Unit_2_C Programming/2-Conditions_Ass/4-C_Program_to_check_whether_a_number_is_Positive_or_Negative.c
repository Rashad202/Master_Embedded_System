#include <stdio.h>
int main()
{
    float a ;
      printf("Enter a number : ");
      scanf("%f",&a);
       if (a>0)
       {
           printf("%.2f is positive",a);
       }
       else if (a<0)
       {
           printf("%0.2f is negative",a);
       }
       else
       {
           printf("you entered zero");
       }
    return 0;
}
