// Program to Convert Binary number into decimal number
// Note: The output is in Reverse order, to get the correct binary number. we can reverse the output 

#include <stdio.h>

int main() {
    int num, rem;
    printf("Enter decimal number: ");
    scanf("%d", &num);

    printf("Binary = ");
    while(num > 0) {
        rem = num % 2;
        printf("%d", rem);  
        num = num / 2;
    }
}