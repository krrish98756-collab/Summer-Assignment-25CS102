// Program to merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, i, arr1[20], arr2[20], arr3[50];
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    for(i = 0; i < n1; i++) arr3[i] = arr1[i];
    for(i = 0; i < n2; i++) arr3[n1+i] = arr2[i];

    printf("Merged array:\n");
    for(i = 0; i < n1+n2; i++) printf("%d ", arr3[i]);
}