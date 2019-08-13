#include <stdio.h>

int main()
{
    int a[10];
    printf("Enter 10 elements int the array\n");
    for (int i=0;i<10;i++)
    {
        scanf("%d\n", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if(a[i]>a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (int i=0;i<10;i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
