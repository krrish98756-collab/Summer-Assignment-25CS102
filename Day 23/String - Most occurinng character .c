// Program to find the maximum occurring character in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}, i, max = 0;
    char result;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
        if(count[str[i]] > max) {
            max = count[str[i]];
            result = str[i];
        }
    }

    printf("Maximum occurring character = %c (appears %d times)\n", result, max);
}