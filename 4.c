#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    char t[50];
    printf("ENTER TEXT :-\n");
    gets(t);
    // Reading
    f = fopen("forth.txt", "w");
    if(f == NULL)
    printf("THIS CAN'T BE OPENED\n");
    else
    {
        printf("THIS FILE IS OPENED NOW.\n");
        if(strlen(t) > 0)
        {
            fputs(t, f);
            fputs("\n", f);
        }
        fclose(f);
        printf("DATA SUCCESSFULLY ENTERED\n");
        printf("FILE IS CLOSE NOW\n\n");
    }
    // Writing
    f = fopen("forth.txt", "r");
    while(fgets(t, 50, f) != NULL)
        printf("%s", t);
    fclose(f);
    printf("DATA SUCCESSFULLY READ FROM FILE\n");
    printf("FILE IS CLOSE NOW\n");
    return 0;
}
