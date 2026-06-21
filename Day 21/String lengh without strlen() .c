// Program to find the length of a string without using strlen() function

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;
    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        len++;
    }

    printf("Length = %d\n", len);
}