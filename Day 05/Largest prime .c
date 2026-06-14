// Program to find the largest prime factor of a number

#include <stdio.h>

int main() {
    int num, i, largest = -1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) {
        while(num % i == 0) {
            largest = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %d\n", largest);
    return 0;
}