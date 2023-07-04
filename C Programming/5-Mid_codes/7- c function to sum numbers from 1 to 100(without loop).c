#include <stdio.h>

int sum_rec(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum_rec(n - 1);
    }
}

int main() {
    int sum = sum_rec(100);
    printf("Sum of numbers from 1 to 100: %d\n", sum);

    return 0;
}