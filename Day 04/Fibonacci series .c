// Wap to Print Fibonacci Series

#include <stdio.h>

int main() {
    int n, prevFirst = 0, prevSecond = 1, nextTerm;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", prevFirst);
        nextTerm = prevFirst + prevSecond;
        prevFirst = prevSecond;
        prevSecond = nextTerm;
    }
    printf("\n");
}