// WAP to print all the vowels and consonants of a string in a separate line.
#include <stdio.h>

int main()
{
    char text[100];
    int vow = 0;
    printf("Enter Text to be evaluated : ");
    fflush(stdin);
    gets(text);
    printf("Vowels are listed below:- \n");
    for (int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] =='u' ||text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] =='U')
        {
            vow++;
            printf("%c, ", text[i]);
        }
    }
    printf("\nFrequency of the vowels are : %d", vow);
    return 0;    
}