#include <stdio.h>

#define	LOWER	0
#define UPPER	300
#define STEP	20

void TempConverter() {
	float fahr;

	printf("-------------------------------\n");
	printf("Temperature Conversion Table\n");
	printf("Fahr\tCelcius\n");
	printf("-------------------------------\n");

	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
		printf("%3.0f\t%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));

	scanf_s("%s");
	return;
}

void Copy() {
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
		c = getchar();
	}
}

void VerifyGetCharEOFEquals0Or1() {
	int c;
	int value = c = getchar() != EOF;
	printf("%d", value);
	scanf_s("%s");
}

void PrintEOF() {
	printf("%d", EOF);
}

void main()
{
	VerifyGetCharEOFEquals0Or1();
}

