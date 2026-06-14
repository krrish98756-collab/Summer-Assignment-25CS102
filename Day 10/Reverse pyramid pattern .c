// Program to print reverse pyramid pattern
/*
    *********
     *******
      *****
       ***
        *
*/

#include <stdio.h>

int main() {
    int n, i, j, s;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}