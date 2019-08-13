// Triangle Pattern 4
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
    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("\t");
        }
        for (int k = 8; k > i; k--)
        {
            printf("$\t");
        }
        for (int l = 8; l < i; l++)
        {
            printf("$\t");
        }
        printf("\t");
    }
    return 0;
}
