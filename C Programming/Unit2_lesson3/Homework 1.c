//--------------------------Ex1----------------------------

#include <stdio.h>

int main()
{
    printf("C Programming ");
    return 0;
}


//--------------------------Ex2----------------------------

#include <stdio.h>

int main()
{
      int x;
      printf("Enter a integer: ");
      scanf("%d",&x);
      printf("You entered: %d ",x);  
    
    return 0;
}
  

//--------------------------Ex3----------------------------
#include <stdio.h>

int main()
{
    int x , y ;
    int sum =0;
      printf("Enter two integers: ");
      scanf("%d %d",&x,&y);
      sum =x+y;
      printf("Sum : %d ",sum);  
    return 0;
}


//--------------------------Ex4----------------------------
#include <stdio.h>

int main()
{
    float x , y ;
    float product =0;
      printf("Enter two floats: ");
      scanf("%f %f",&x,&y);
      product =x*y;
      printf("Product : %f ",product);  
    return 0;
}


//--------------------------Ex5----------------------------


#include <stdio.h>

int main()
{   
    char x;
       printf("Enter a character: ");
       scanf("%c",&x);
       printf("ASCII value of %d", x);
    return 0;
}


//--------------------------Ex6----------------------------
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


//--------------------------Ex7----------------------------
#include <stdio.h>
int main()
{
    double a , b ,c;
      printf("Enter value of a: ");
      scanf("%lf",&a);
      printf("Enter value of b: ");
      scanf("%lf",&b);
       a=a+b;
       b=a-b;
       a=a-b;
      printf("After swapping, value of a = %lf\n",a);
      printf("After swapping, value of b = %lf ",b);
    return 0;
}
