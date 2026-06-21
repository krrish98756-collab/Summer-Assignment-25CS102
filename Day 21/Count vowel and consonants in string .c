// Program to count the number of vowels and consonants in a string

#include <stdio.h>

int main() {
    char str[100];
    int i, v = 0, c = 0;
    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
               str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
}