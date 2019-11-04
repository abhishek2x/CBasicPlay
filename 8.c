// Reading the structure variable (Depicting fwrite())
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[25];
    float marks;
};

void main()
{
    FILE *fp;
    char ch ='Y';
    struct Student stu;

    fp = fopen("8.txt", "w"); 

    while(ch == 'Y' || ch == 'y')
    {

        printf("\nEnter Roll : ");
        scanf("%d", &stu.roll);

        printf("Enter Name : ");
        //fflush(stdin);  // for cleaning memory
        gets(stu.name);

        printf("Enter Marks : ");
        scanf("%f", &stu.marks);

        fwrite(&stu, sizeof(stu), 1000, fp);

        printf("Do You want to continue? (y/n)");
        ch = getch();
    }

    printf("\nData written successfully...\n\n");
    fclose(fp);
}
