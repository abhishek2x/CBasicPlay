    #include <stdio.h>
    int main()
    {
       char name[50];
       int marks, i;
       FILE *fptr;
       fptr = (fopen("student.txt", "w"));
       if(fptr == NULL)
       {
           printf("Error!");
           exit(1);
       }
          printf("For student%d\nEnter name: ", i+1);
          scanf("%s", name);
          printf("Enter marks: ");
          scanf("%d", &marks);
          fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);

       fclose(fptr);
       return 0;
    }