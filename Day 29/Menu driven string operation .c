// Program to perform string operations using a menu-driven approach

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice, i;
    printf("Enter a string: ");
    gets(str);

    do {
        printf("\nString Menu:\n1. Length\n2. Reverse\n3. Uppercase\n4. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Length = %d\n", strlen(str)); break;
            case 2: {
                int len = strlen(str);
                printf("Reversed = ");
                for(i = len-1; i >= 0; i--) printf("%c", str[i]);
                printf("\n");
                break;
            }
            case 3: {
                for(i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
                }
                printf("Uppercase = %s\n", str);
                break;
            }
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while(choice != 4);
    return 0;
}