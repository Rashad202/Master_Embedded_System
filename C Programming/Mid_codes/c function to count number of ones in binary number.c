#include <stdio.h>
int count (int x)
{ 
    int y=0;
    while(x!=0)
    {
       
       if(x%2 == 1)
       y++;
       
       x/=2;
     
    }
    return y;
}


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d",count(num));

    return 0;
}