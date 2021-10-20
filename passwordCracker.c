#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()

{
	

	char r_usuario[50];
	char r_pass[50];
	char usuario[50];
	int c;
	FILE *file;
	int x;


	printf("registra usuario: ");
	gets(r_usuario);

	printf("registra pass: ");
	gets(r_pass);


	printf("usuario: ");
	gets(usuario);

	printf("password cracker\n");
	printf("-----------------\n");

	
	printf("a\n");
	file = fopen("list.txt", "r");
	printf("b\n");
	
	c = getc(file);

	for (int x = 0; x < file.Length - 1; x++)
    	{
        	if (r_pass == c)
        	{
	            printf("there is a match");
	        }        	    


	}
	return 0;

}

