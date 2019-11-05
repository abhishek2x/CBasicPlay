// WAP to print all the characters of the strings in a different lines
#include <stdio.h>

int main()
{
    char s[20];
    int l;
    printf("Enter a String : ");
    fflush(stdin);
    gets(s);
    for (l = 0; s[l] != '\0'; l++);     // In l we'll get the length of the string
    for (int i = 0; i < l; i++)
    printf("%c\n", s[i]);
    
}
