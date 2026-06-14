// Program to print number pyramid pattern
/*
    1
   121
  12321
 1234321
123454321

*/


#include <stdio.h>

int main() {
    int n, i, j, s;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}