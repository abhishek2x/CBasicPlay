 #include <stdio.h>

 void disp(int *);
 int main()
 {
     int m[] = {2,34,345,234,543,234,234};
     for (int i = 0; i < 7; i++)
     {
         disp(&m[i]);
     }
     return 0;
 }

 void disp(int *pr)
 {
   show(&pr);
 }
