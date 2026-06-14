// Program to find the sum of two numbers using functions.

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter the First Num : ");
    scanf("%d", &x);

    printf("Enter the Second Num : ");
    scanf("%d", &y);

    printf("Sum = %d\n", sum(x, y));
}