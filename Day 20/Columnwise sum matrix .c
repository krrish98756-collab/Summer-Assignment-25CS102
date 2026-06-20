// Program to find the Column-wise sum of a matrix

#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], sum;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(j = 0; j < c; j++) {
        sum = 0;
        for(i = 0; i < r; i++)
            sum += a[i][j];
        printf("Column %d sum = %d\n", j+1, sum);
    }
}