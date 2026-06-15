// Program to find the frequency of an element in an array

#include <stdio.h>

int main() {
    int n, i, key, count = 0, arr[100];
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency of %d = %d\n", key, count);
}