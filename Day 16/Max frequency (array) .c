// Program to find the element with maximum frequency in an array.

#include <stdio.h>

int main() {
    int n, i, j, arr[20], maxFreq = 0, element;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) count++;
        }
        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Maximum frequency element = %d (appears %d times)\n", element, maxFreq);
    return 0;
}