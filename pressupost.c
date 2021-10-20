#include <stdio.h>

int main(void)

{

	int personalBecat;
	int personalNoBecat;
	int partidaInventariable;
	int viatges;
	int llogersIserveis;
	int fungible;
	int durada;
	int total;
	int overhead;

	printf("Pressupost del projecte de recerca\n");
	printf("---------------------------------");


	printf("\nDurada del projecte en mesos: ");
	scanf("%d", &durada);

	printf("\nQuantitat de persones a contractar sense beca: ");
	scanf("%d", &personalNoBecat);

	printf("\nQuantitat de persones a contractar amb beca: ");
	scanf("%d", &personalBecat);

	int totalPersonal = ((personalBecat * 1200) + (personalNoBecat * 2500));

	printf("\nTotal de material inventariable: ");
	scanf("%d", &partidaInventariable);

	printf("\nTotal de viatges: ");
	scanf("%d", &viatges);

	printf("\nTotal de llogers i serveis: : ");
	scanf("%d", &llogersIserveis);

	printf("\nTotal de material fungible: ");
	scanf("%d", &fungible);


	total = (totalPersonal + partidaInventariable + viatges + llogersIserveis + fungible);


	if (durada >= 6 && durada <= 12)
	{
		overhead = ((total*10)/100);
		printf("\nTotal Projecte =  %d$ | Overhead = %d$ \n", total, overhead);
	}

	else
	{
		overhead = ((total*20)/100);
		printf("\nTotal Projecte =  %d$ | Overhead = %d$ \n", total, overhead);
	}

		printf("\n");

	return 0;


}
