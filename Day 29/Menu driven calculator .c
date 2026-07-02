// Program to implement a menu driven calculator

#include <stdio.h>

int main() {
    int choice;
    double a, b;
    do {
        printf("\nCalculator Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch(choice) {
            case 1: printf("Result = %.2lf\n", a+b); break;
            case 2: printf("Result = %.2lf\n", a-b); break;
            case 3: printf("Result = %.2lf\n", a*b); break;
            case 4: if(b != 0) printf("Result = %.2lf\n", a/b);
                    else printf("Division by zero not allowed\n");
                    break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while(choice != 5);
    return 0;
}