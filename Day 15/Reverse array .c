#include <stdio.h>

int main() {
    int n, i, arr[20];
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}