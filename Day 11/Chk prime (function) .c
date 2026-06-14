// Program to check if a number is prime using functions.

#include <stdio.h>

int isPrime(int n) {
    int i;
    if(n <= 1) return 0;
    for(i = 2; i < n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("%d is Prime\n", num);
    else
        printf("%d is Not Prime\n", num);
}