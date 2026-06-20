// Program to find the sum of each row in a matrix

#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], sum;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++)
            sum += a[i][j];
        printf("Row %d sum = %d\n", i+1, sum);
    }
}