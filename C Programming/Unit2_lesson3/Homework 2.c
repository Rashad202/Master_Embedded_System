//------------------------------EX1------------------------------


#include <stdio.h>
int main()
{
   int x;
   printf("Enter an integer you want to cheack: ");
   scanf("%d",&x);

    if(x%2 == 0)
    {
       printf(" %d is even",x);
    }
    else
    {
       printf(" %d is odd",x);
    }
    return 0;
}

//------------------------------EX2------------------------------
#include <stdio.h>
int main()
{
   char x;
     printf("Enter an alphabet : ");
     scanf("%c",&x);
      
    if (x == 'a' || x== 'e'|| x== 'i'|| x== 'o'|| x== 'u'||x == 'A' || x== 'E'|| x== 'I'|| x== 'O'|| x== 'U')   
            printf("%c is a vowel ",x);
    else
            printf("%c is a consonat ",x);
  
    return 0;
}
		//-------------or---------------


#include <stdio.h>
int main()
{
   char x;
      printf("Enter an alphabet : ");
      scanf("%c",&x);

   switch(x)
   {
    	case 'a':
	case 'A':
        	printf("%c is a vowel ",x);
        	break;	
	case 'e':
	case 'E':
        	printf("%c is a vowel ",x);
	        break;
	case 'i':
	case 'I':
        	printf("%c is a vowel ",x);
	        break;	
	case 'o':
	case 'O':
        	printf("%c is a vowel ",x);
	        break;
	case 'u':
	case 'U':
	        printf("%c is a vowel ",x);
	        break;
	default:
	        printf("%c is a consonat ",x);
	        break;
   }
  
    return 0;
}


//------------------------------EX3------------------------------



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


//------------------------------EX4------------------------------
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


//------------------------------EX5------------------------------
#include <stdio.h>
int main()
{
    char x;
        printf("Enter a character: ");
        scanf("%c",&x);
    if(x >='a' && x<='z' || x>='A' && x<='Z' )
        printf("%c is an alphbet ",x);
    else
        printf("%c is not an alphbet ",x);
    return 0;
}


//------------------------------EX6------------------------------

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

//------------------------------EX7------------------------------
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


//------------------------------EX8------------------------------


#include <stdio.h>
int main()
{
    float a ,b;
    float result=0;
    char op;
        printf("Enter operator  either + or - or * or divide: ");
        scanf("%c",&op);
        printf("Enter two operands: ");
        scanf("%f %f",&a,&b);
    
    switch(op)
    {
        case '+':
            result =a+b;
            printf("%0.1f %c %0.1f = %0.1f",a,op,b,result);
            break;
        case '-':
            result =a-b;
            printf("%0.1f %c %0.1f = %0.1f",a,op,b,result);
            break;
        case '*':
            result =a*b;
            printf("%0.1f %c %0.1f = %0.1f",a,op,b,result);
            break;
        case '/':
            if(b != 0)
            {    result =a/b;
                printf("%0.1f %c %0.1f = %0.1f",a,op,b,result);
            }
            else
                printf("Error");
            break;
        default:
            printf("Error  not operator ");
            break;
    }
    return 0;
}
