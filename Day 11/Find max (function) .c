// Program to find the maximum of two numbers using functions.

#include <stdio.h>

int max(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    
    printf("Enter the First Num : ");
    scanf("%d", &x);

    printf("Enter the Second Num : ");
    scanf("%d", &y);

    printf("Maximum = %d\n", max(x, y));
}