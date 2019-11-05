/* WAP to enter a text from the user and print all the upper case, 
    lower case and special symbols seperately and also evaluate frequency of each. */
    
#include <stdio.h>

int main()
{
    char text[100];
    int lc, uc, sc;
    lc = uc = sc = 0;
    printf("Enter text : ");
    gets(text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] >= 'a' && text <= 'z')
        {
            printf("LowerCase Character : %c\n", text[i]);
            lc++;
        }
        else if(text[i] >= 'A' && text[i] <= 'Z')
        {
            printf("UpperCase Character : %c\n", text[i]);
            uc++;
        }
        else
        {
            printf("Special Character : %c\n", text[i]);
            sc++;
        }
    }
    printf("UpperCase Characters = %d\n", uc);
    printf("LowerCase Characters = %d\n", lc);
    printf("Special Characters are = %d", sc);
}