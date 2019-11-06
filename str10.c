// WAP a program to input a list of names and arrange them in alphabetical order
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of names to be entered : ");
    scanf("%d", &n);
    char names[n][40];

    printf("Enter %d words:\n", n);
    for(int i=0; i<n; ++i)
    scanf("%s\n", &names[i]);

    for (int i = 0; i < n; i++)
    puts(names[i]);
    return 0;
}
