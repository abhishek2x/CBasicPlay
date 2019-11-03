# include <stdio.h> 
# include <string.h> 

int main( ) 
{ 
	FILE *fp ; 

	char data[50];
    printf("Enter some text\n");
    gets(data); 
	fp = fopen("second.txt", "w") ; 

	if ( fp == NULL ) 
		printf( "file failed to open." ); 
	else
	{ 
		printf("The file is now opened.\n") ;
		if ( strlen ( data ) > 0 ) 
		{ 
			fputs(data, fp) ; 
			fputs("\n", fp) ; 
		} 
		fclose(fp) ; 
		printf("Data successfully written\n"); 
		printf("The file is now closed.") ; 
	} 
	return 0;		 
}
