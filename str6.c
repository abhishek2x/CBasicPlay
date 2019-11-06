// WAP to find occurrence of a character in the string.
#include <stdio.h>

int main()
{
    char s[20];
    int f = 0;
    char ch;
    printf("Enter a String : ");
    fflush(stdin);
    gets(s);
    printf("Enter a character to find its freqenc : ");
    scanf("%c", &ch);
    for (int  i = 0; s[i] != '\0'; i++)
    {
        if(ch == s[i])
        f++;
    }
    printf("Frequency of %c is %d", ch, f);
    return 0;
}