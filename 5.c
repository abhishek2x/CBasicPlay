// the Number of Characters in a Text File 
#include <stdio.h> 
#define MAX_FILE_NAME 100 

int main() 
{ 
	FILE* fp; 
	int count = 0; 

	char filename[MAX_FILE_NAME]; 
	char c; 
	printf("Enter file name: "); 
	scanf("%s", filename); 

	fp = fopen(filename, "r");
	if (fp == NULL) 
    { 
		printf("Could not open file %s", filename); 
		return 0; 
	}
    
	while(getc(fp) != EOF)
    count = count + 1; 
    
	fclose(fp); 
	printf("The file %s has %d characters\n ", filename, count); 
	return 0; 
} 
