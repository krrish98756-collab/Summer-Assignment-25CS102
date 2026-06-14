// Wap to Find Nth Fibonacci Term.

#include <stdio.h>

int main() {
    int n, prevFirst = 0, prevSecond = 1, nextTerm, i;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci term = %d\n", prevFirst);
    } else if (n == 2) {
        printf("Fibonacci term = %d\n", prevSecond);
    } else {
        for (i = 3; i <= n; i++) {
            nextTerm = prevFirst + prevSecond;
            prevFirst = prevSecond;
            prevSecond = nextTerm;
        }
        printf("Fibonacci term = %d\n", prevSecond);
    }
}