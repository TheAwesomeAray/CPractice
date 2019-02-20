#include <stdio.h>

void main()
{
	float fahr;

	printf("-------------------------------\n");
	printf("Temperature Conversion Table\n");
	printf("Fahr\tCelcius\n");
	printf("-------------------------------\n");

	for (fahr = 300; fahr >= 0; fahr -= 20)
		printf("%3.0f\t%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));

	scanf_s("%s");
}