// Triangle Pattern 3

#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 9; j > i; j--)
        {
            printf("\t");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("$\t");
        }
        for (int l = 0; l < i; l++)
        {
            printf("$\t");
        }
        printf("\n");
    }
    return 0;
}