// Program to find the longest word in a sentence

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j, maxLen = 0;
    printf("Enter a sentence: ");
    gets(str);

    while(str[i] != '\0') {
        j = 0;
        while(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';
        if(strlen(word) > maxLen) {
            maxLen = strlen(word);
            strcpy(longest, word);
        }
        if(str[i] == ' ') i++;
    }

    printf("Longest word = %s\n", longest);
}