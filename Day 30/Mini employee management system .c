// Program to implement a simple Employee Management System

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[50];
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter id, name, salary: ");
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }

    printf("\nEmployee Records:\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
    }
    return 0;
}