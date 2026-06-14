// Program to reverse a number using recursive function.

#include <stdio.h>

int revNum(int num, int rev) {
    if(num == 0)
        return rev;
    return revNum(num/10, rev*10 + num%10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d\n", revNum(num, 0));
}