//Program to find pairs in an array that sum up to a given target.

#include <stdio.h>

int main() {
    int n, i, j, arr[20], sum;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d:\n", sum);
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);
            }
        }
    }
}