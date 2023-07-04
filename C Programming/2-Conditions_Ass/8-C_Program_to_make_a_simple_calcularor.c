
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