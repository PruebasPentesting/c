#include <stdbool.h>
#include <stdio.h>

int main()

{
	int i = 0;
	bool out = true;

	while (out)
	{

		if (i <= 5)
		{
			printf("%d\n", i);
			i = i + 1;
			printf(out ?"true\n":"false\n");
		}
		else
		{
			out = false;
		}


	}
	
	return 0;
}
