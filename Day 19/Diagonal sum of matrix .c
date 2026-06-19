// Program to find the sum of diagonal elements of a square matrix

#include <stdio.h>

int main() {
    int n, i, j, a[10][10], sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
        sum = sum + a[i][i] + a[i][n-i-1];

    if(n % 2 == 1) sum = sum - a[n/2][n/2]; // avoid double count center

    printf("Diagonal sum = %d\n", sum);
}