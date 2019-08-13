#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
   char r = "";
   char c = "";
   char a[100];
   printf("Enter a string in the array that need to be sorted\n");
   gets(a);
   for (int i = 0; i < 10; i++)
   {
      c = a[i];
      for (int j = i+1; j < 10; j++)
      {
         if(strcmp(c, a[j]) == 1)
         strrep(c, a[j]);
      }   
   }
   puts (a);
   return 0;
}