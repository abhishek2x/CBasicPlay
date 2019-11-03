    #include <stdio.h>
    struct student
    {
       char name[50];
       int marks;
       char branch[20];
    };
    int main(){
        struct student stud1[2], stud2[2];   
        FILE *fptr;
        int i;
        fptr = fopen("file.txt","wb");
        for(i = 0; i < 2; ++i)
        {
            fflush(stdin);
            printf("Enter name: ");
            gets(stud1[i].name);
            printf("Enter Marks: "); 
            scanf("%d", &stud1[i].marks); 
            fflush(stdin);
            printf("Enter Branch: "); 
            gets(stud1[i].branch);
        }
        fwrite(stud1, sizeof(stud1), 1, fptr);
        fclose(fptr);
        fptr = fopen("file.txt", "rb");
        fread(stud2, sizeof(stud2), 1, fptr);
        printf("\n\n");
        for(i = 0; i < 2; ++i)
        {
            printf("Name: %s\nMarks: %d\nBranch: %s\n\n", stud2[i].name, stud2[i].marks, stud2[i].branch);
        }
        fclose(fptr);
    }
