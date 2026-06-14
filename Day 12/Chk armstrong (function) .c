// Program to check if a number is an Armstrong number or not using a function

#include <stdio.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, rem;
    while(temp > 0) {
        rem = temp % 10;
        sum = sum + rem*rem*rem; 
        temp = temp / 10;
    }
    return (sum == n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is Armstrong\n", num);
    else
        printf("%d is Not Armstrong\n", num);
}