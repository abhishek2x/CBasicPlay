// WAP a program to convert case of a string
#include <stdio.h>

void LowerToUpper(char []);
void UpperToLower(char []);

int main()
{
    char str[100];
    int choice;
    printf("Enter a String : ");
    fflush(stdin);
    gets(str);

    printf("Enter 1 to convert to Lowercase and 2 to convert in uppercase");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        UpperToLower(str);
        break;
    case 2:
        LowerToUpper(str);
        break;
    default:
        printf("Invalid Text.");
        break;
    }
    return 0;
}

void LowerToUpper(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
    }
    printf("New String in UpperCase : %s", a);
}

void UpperToLower(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }
    printf("New String in LowerCase : %s", a);
}