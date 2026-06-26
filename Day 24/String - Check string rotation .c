// Program to check if two strings are rotations of each other

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Rotation\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
        printf("Strings are Rotation\n");
    else
        printf("Not Rotation\n");
}