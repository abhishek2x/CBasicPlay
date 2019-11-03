#include <stdio.h> 
#include <string.h> 

int main( ) 
{ 
	FILE *f;
	char txt[50];
	f = fopen("Second.txt", "r");
	if (f == NULL) 
		printf("file failed to open."); 
	else
	{ 
		printf("The file is now opened.\n"); 
        while(fgets(txt, 50, f) != NULL) 
			printf("%s", txt); 
		fclose(f);
		printf("Data successfully read from file\n"); 
		printf("The file is now closed."); 
	} 
	return 0;		 
}
