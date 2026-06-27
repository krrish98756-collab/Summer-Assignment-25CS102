// Program to manage salary records of employees

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee e[10];
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter id, name, basic salary: ");
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].basic);
        e[i].hra = e[i].basic * 0.2;
        e[i].da = e[i].basic * 0.1;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\nSalary Records:\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Gross Salary: %.2f\n", e[i].id, e[i].name, e[i].gross);
    }
    return 0;
}