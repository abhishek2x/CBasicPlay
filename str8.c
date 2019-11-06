/*C program to print following pattern.


            H
            He
            Hel
            Hell
            Hello   */

#include <stdio.h>
int main()
{
    char s[5] = "HELLO"; 
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
}
