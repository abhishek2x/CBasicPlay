#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *names[3];
    char n[50];
    int len, i;
    char *p;
    for ( i = 0; i <= 5; i++)
    {
        printf("Enter name");
        scanf("%s", n);
        len = strlen(n); 
        p = (char *)malloc(len+1);
        strcpy(p, names[i]);
      //  names[i] = p;
    }
    for (i = 0; i <=5 ; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}
