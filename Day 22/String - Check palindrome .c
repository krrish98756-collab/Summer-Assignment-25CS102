// Program to check whether a string is palindrome or not

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 1;
    printf("Enter a string: ");
    gets(str);

    j = strlen(str) - 1;
    for(i = 0; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if(flag) printf("Palindrome string\n");
    else printf("Not Palindrome\n");
}