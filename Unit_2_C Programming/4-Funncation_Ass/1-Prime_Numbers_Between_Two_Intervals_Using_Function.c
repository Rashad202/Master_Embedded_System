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