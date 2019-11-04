// Playing between terminal and txt files.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    char TtoF[200];
    char FtoT[200];
    printf("Start Typing... :  ");
    gets(TtoF);

    //for printing from terminal to file
    p = fopen("Article.txt", "w");

    if (p == NULL) 
		printf( "file failed to open." ); 

    fputs(TtoF, p);    //Alternate : fprintf(p, "%s", TtoF);
    printf("Data successfully entered in the file\n");
    fclose(p);

    // for printing from file to terminal
    fopen("Article.txt", "r");
    while(fgets(FtoT, 200, p) != NULL)
    {
        puts(FtoT);
    }
    return 0;
}
