// Program to check prime numbers in a given range using flag variable

#include <stdio.h>

int main() {
    int start, end, i, j;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for(i = start; i <= end; i++) {
        if(i < 2) continue;
        for(j = 2; j < i; j++) {
            if(i % j == 0)
                break;
        }
        if(j == i) {
            printf("%d ", i);
        }
    }
}