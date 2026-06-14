//Program to calculate x raised to the power n without pow() function.

#include <stdio.h>

int main() {
    int x, n, i;
    int result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    for(i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("%d^%d = %d\n", x, n, result);
    return 0;
}