
#include <stdio.h>
#include <stdbool.h>
#include <string.h>





int main()

{

	//char c= 'A';
	//putchar(c)

	char r_usuario[50];
	char r_pass[50];

	char usuario[50];
	char pass[50];

	bool out_user = true;
	bool out_pass = true;
	bool out_global = true;


	printf("registra usuario: ");
	gets(r_usuario);


	printf("registra pass: ");
	gets(r_pass);


	printf("logea usuario: ");
	gets(usuario);
	

	while (out_global) //un solo bucle acorta faena.
	{

		if (strcmp(usuario, r_usuario) == 0) 
		{
			printf("logea pass: ");
			gets(pass);


			if (strcmp(pass, r_pass) == 0)
			{
				printf("loggin correcto \n");
				out_global = false;

			}

			else
			{
				printf("loggin no correcto\n");
				printf("logea pass: ");
				gets(pass);
			}


		}


		else
		{
			printf("logea usuario: ");
			gets(usuario);
				
		}
	}

	return 0;
}
