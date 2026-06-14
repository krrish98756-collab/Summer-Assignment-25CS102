// Program to find the factorial of a number using functions.

#include <stdio.h>

int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d\n", fact(num));
}