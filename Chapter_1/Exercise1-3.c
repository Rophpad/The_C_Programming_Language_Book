#include <stdio.h>

/**
 * main - print conversion of the fahrenheit
 * table
 * 
 * Description: This function print a heading
 * above the table of farhenheit conversion.
 * Return: An int
 */


int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf(" Fahrenheit-Celsius table");
	printf("\nFarh_TMP\tCelsius_TMP\n");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return (0);
}
