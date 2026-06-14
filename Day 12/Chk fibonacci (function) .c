// Program to print Fibonacci series up to n terms using a function

#include <stdio.h>

void fib(int n) {
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    while(n > 2) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        n--;
    }
}

int main() {
    int n;
    printf("Enter terms: ");
    scanf("%d", &n);

    fib(n);
}