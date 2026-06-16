// Program to find the missing number in an array.
#include <stdio.h>

int main() {
    int n, i, arr[20], sum = 0;
    printf("Enter Last number of the series: ");
    scanf("%d", &n);

    printf("Enter %d elements in a series:\n", n-1);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Missing number = %d\n", (n*(n+1)/2) - sum);
}