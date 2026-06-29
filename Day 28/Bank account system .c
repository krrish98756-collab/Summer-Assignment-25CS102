#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int choice;
    float amount;

    printf("Enter account number, name, balance: ");
    scanf("%d %s %f", &a.accNo, a.name, &a.balance);

    do {
        printf("\nBank Menu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    a.balance += amount;
                    break;
            case 2: printf("Enter withdraw amount: ");
                    scanf("%f", &amount);
                    if(amount <= a.balance) a.balance -= amount;
                    else printf("Insufficient balance\n");
                    break;
            case 3: printf("Balance = %.2f\n", a.balance); break;
            case 4: printf("Thank you!\n"); break;
            default: printf("Invalid choice\n");
        }
    } while(choice != 4);

    return 0;
}