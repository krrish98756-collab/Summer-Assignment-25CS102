// Program to find the intersection of two arrays

#include <stdio.h>

int main() {
    int n1, n2, i, j, arr1[20], arr2[20];
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    printf("Intersection elements:\n");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
}