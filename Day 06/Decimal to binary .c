// Program to Convert a decimal number into binary number

#include <stdio.h>

int main() {
    int num, rem;
    printf("Enter decimal number: ");
    scanf("%d", &num);

    printf("Binary = ");
    while(num > 0) {
        rem = num % 2;
        printf("%d", rem);   // prints in reverse order
        num = num / 2;
    }
}