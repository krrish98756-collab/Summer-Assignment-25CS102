// Program to find the union of two arrays

#include <stdio.h>

int main() {
    int n1, n2, i, j, arr1[20], arr2[20], arr3[20], k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    for(i = 0; i < n1; i++) arr3[k++] = arr1[i];
    for(i = 0; i < n2; i++) {
        int found = 0;
        for(j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) { found = 1; break; }
        }
        if(!found) arr3[k++] = arr2[i];
    }

    printf("Union array:\n");
    for(i = 0; i < k; i++) printf("%d ", arr3[i]);
}