//Program to move all zeroes to the end of an array.

#include <stdio.h>

int main() {
    int n, i, j = 0, arr1[20], arr2[20];    
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr1[i] != 0) {
            arr2[j] = arr1[i];
            j++;
        }
    }
    while(j < n) {
        arr2[j] = 0;
        j++;
    }

    printf("Array after moving zeroes:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
}