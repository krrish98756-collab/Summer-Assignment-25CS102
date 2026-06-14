// Program to print character pyramid pattern
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/


#include <stdio.h>

int main() {
    int n, i, j, s;
    char ch;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for(j = 1, ch = 'A'; j <= i; j++, ch++) {
            printf("%c", ch);
        }
        for(j = i - 1, ch = 'A' + i - 2; j >= 1; j--, ch--) {
            printf("%c", ch);
        }
        printf("\n");
    }
}