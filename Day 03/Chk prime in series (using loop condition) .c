// Program to check prime numbers in a given range using loop condition

#include <stdio.h>

int main() {
    int start, end, i, j;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers:\n");
    for(i = start; i <= end; i++) {
        if(i < 2) continue;
        for(j = 2; j < i; j++) {
            if(i % j == 0) break;
        }
        if(j == i) printf("%d ", i);
    }
}