//---------------------------------Ex1---------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num);

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Prime numbers between %d and %d are: ", num1, num2);
    
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    
    
    return 0;
}

int isPrime(int num) {
    if (num <0 )
        return 0;
    else if(num ==1)
        return 1;
        
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    
    return 1;
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
