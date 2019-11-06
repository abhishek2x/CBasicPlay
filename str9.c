// WAP a program to sort a string
#include <stdio.h>

int main()
{
    char s1[20];
    char s2[20];
    printf("Enter first string : ");
    gets(s1);
    printf("Enter second string : ");
    gets(s2);
    int f;
    for (int i = 0; s1[i] != '\0' ; i++)
    {
        if(s1[i] < s2[i])
        {
            f = 1;
            break;
        }
        else if(s1[i] > s2[i])
        {
            f = 2;
            break;
        }
    }
    if(f == 1)
    printf("%s is bigger\n", s1);
    if(f == 2)
    printf("%s is bigger\n", s2);
    return 0;
}
