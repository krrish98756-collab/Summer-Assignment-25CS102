// Program to print the reverse of a number.

#include <stdio.h>
int main() {
    int num, remainder, sum = 0, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder=num%10;
        sum = sum+remainder;
        reverse = reverse * 10 + remainder;
        num/=10;}
        
    printf("The reverse of the number : %d", reverse);
    printf("\nThe sum of the digits : %d", sum);
}