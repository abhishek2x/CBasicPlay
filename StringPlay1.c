#include <stdio.h>

int main()
{
    // first way to enter name from the user
    char name[23];
    printf("Enter your name");
    gets(name);
    //second way to get name from the user
    char name2[25];
    printf("Enter your name");
    scanf("%[^\n]s", name2);
    // printing of first name
    puts("Hello First name");
    puts(name);
    // printing of the second name
    puts("Hello Second name");
    puts(name2);
    return 0;
}