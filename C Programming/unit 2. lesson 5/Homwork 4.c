//---------------------------------Ex1---------------------------------

#include <stdio.h>
int prime(int y);
int main()
{
    int a,b,x;
    printf("Enter two numbers'interval' :");
    scanf("%d%d",&a,&b);
    printf("prime numbers between %d and %d are : ",a ,b);
      for (++a;a<b;a++)
       {
          x= prime(a);
          if(x == 0)
          printf("%d ",a);
       }
    return 0;
}
int prime(int x )
{
  int v=0;
    for(int y=2;y<=9;y++)
    {
        if(x%y == 0)
          {
            v=1;
            break;
          }
    }
    return v;
}
 
//---------------------------------Ex2---------------------------------
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

//---------------------------------Ex3---------------------------------
#include <stdio.h>
#include <string.h>

void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence()
{
    char s;
    scanf("%c", &s);

    if (s != '\n')
    {
        reverseSentence();
        printf("%c", s);
    }
}

//---------------------------------Ex4---------------------------------
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
