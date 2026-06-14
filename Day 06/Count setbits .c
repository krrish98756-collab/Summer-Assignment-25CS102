// Program to Count Set Bits in a number

#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        if(num % 2 == 1)
            count++;
        num = num / 2;
    }

    printf("Set bits = %d\n", count);
}