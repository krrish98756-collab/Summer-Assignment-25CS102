// Program to create a simple quiz application.

#include <stdio.h>

int main() {
    int score = 0, ans;
    printf("Q1: Capital of India?\n1. Delhi\n2. Mumbai\n");
    scanf("%d", &ans);
    if(ans == 1) score++;

    printf("Q2: 2 + 2 = ?\n1. 3\n2. 4\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    printf("Q3: Largest planet?\n1. Earth\n2. Jupiter\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    printf("Your score = %d\n", score);
    return 0;
}