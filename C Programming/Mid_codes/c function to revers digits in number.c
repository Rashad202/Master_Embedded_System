#include <stdio.h>

int reverse_Digits(int num) {
    int reversed = 0;
    
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return reversed;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int reverse_Num = reverse_Digits(num);
    
    printf("Reversed number: %d\n", reverse_Num);
    
    return 0;
}