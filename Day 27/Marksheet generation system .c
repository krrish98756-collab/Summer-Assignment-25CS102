// Program to generate marksheet for students

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percent;
};

int main() {
    struct Student s;
    int i;
    printf("Enter roll and name: ");
    scanf("%d %s", &s.roll, s.name);

    s.total = 0;
    printf("Enter marks of 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.percent = s.total / 5.0;

    printf("\nMarksheet:\n");
    printf("Roll: %d, Name: %s\n", s.roll, s.name);
    printf("Total = %d, Percentage = %.2f\n", s.total, s.percent);
    if(s.percent >= 60) printf("Result: First Division\n");
    else if(s.percent >= 45) printf("Result: Second Division\n");
    else if(s.percent >= 33) printf("Result: Third Division\n");
    else printf("Result: Fail\n");

    return 0;
}