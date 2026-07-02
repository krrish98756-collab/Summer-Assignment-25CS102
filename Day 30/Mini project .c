// Program to implement a simple Student, Employee, and Library Management System

#include <stdio.h>
#include <string.h>

struct Student { int roll; char name[50]; float marks; };
struct Employee { int id; char name[50]; float salary; };
struct Book { int id; char title[50]; char author[50]; };

void studentSystem() {
    struct Student s[10]; int n,i;
    printf("Enter number of students: "); scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter roll, name, marks: ");
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }
    printf("\nStudent Records:\n");
    for(i=0;i<n;i++) {
        printf("Roll:%d Name:%s Marks:%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
}

void employeeSystem() {
    struct Employee e[10]; int n,i;
    printf("Enter number of employees: "); scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter id, name, salary: ");
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
    }
    printf("\nEmployee Records:\n");
    for(i=0;i<n;i++) {
        printf("ID:%d Name:%s Salary:%.2f\n",e[i].id,e[i].name,e[i].salary);
    }
}

void librarySystem() {
    struct Book b[10]; int n,i;
    printf("Enter number of books: "); scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter id, title, author: ");
        scanf("%d %s %s",&b[i].id,b[i].title,b[i].author);
    }
    printf("\nLibrary Records:\n");
    for(i=0;i<n;i++) {
        printf("ID:%d Title:%s Author:%s\n",b[i].id,b[i].title,b[i].author);
    }
}

int main() {
    int choice;
    do {
        printf("\nMini Project Menu:\n");
        printf("1. Student System\n2. Employee System\n3. Library System\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1: studentSystem(); break;
            case 2: employeeSystem(); break;
            case 3: librarySystem(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while(choice!=4);
    return 0;
}