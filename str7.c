// WAP to replace all vowels with star (*) and consonants with hash (#) of string.
#include <stdio.h>

int main()
{
    char s[20];
    printf("Enter a string : ");
    fflush(stdin);
    gets(s);
    for (int i = 0; s[i] != '\0' ; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] =='U')
            s[i] = '*';
        else
            s[i] = '#';        
    }
    puts(s);
    return 0;
}