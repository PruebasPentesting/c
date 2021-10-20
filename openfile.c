#include <stdio.h>


int main()


{
	int c;
	FILE *file;
	file = fopen("list.txt", "r");

	while ((c = getc(file)) != EOF)
	{
	       	putchar(c);
	}
	fclose(file);

	return 0;
}
