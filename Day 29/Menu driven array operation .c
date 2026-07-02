// Program to perform menu driven operations on an array

#include <stdio.h>

int main() {
    int arr[100], n, i, choice;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    do {
        printf("\nArray Menu:\n1. Display\n2. Sum\n3. Reverse\n4. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: for(i = 0; i < n; i++) printf("%d ", arr[i]); break;
            case 2: {
                int sum = 0;
                for(i = 0; i < n; i++) sum += arr[i];
                printf("Sum = %d\n", sum);
                break;
            }
            case 3: for(i = n-1; i >= 0; i--) printf("%d ", arr[i]); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while(choice != 4);
    return 0;
}