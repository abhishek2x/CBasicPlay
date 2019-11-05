// WAP to reverse a string without using any other string variable
#include <stdio.h>

int main()
{
    char s[20];
    char ch;
    printf("Enter a string : ");
    fflush(stdin);
    gets(s);

    int l;
    for ( l = 0; s[l] != '\0'; l++);    // calculating length

    for (int i = 0; i < l/2 ; i++)
    {
        ch = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = ch;
    }
    puts(s);
}