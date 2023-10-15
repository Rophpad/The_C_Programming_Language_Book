#include <stdio.h>

/**
 * main - print conversion of the fahrenheit
 * table
 * 
 * Description: This function print a heading
 * above the table of farhenheit conversion in
 * reverse, from 300 to 0.
 * Return: An int
 */


int main(void)
{
	float fahr, celsius;

	printf(" Fahrenheit-Celsius table");
	printf("\nFarh_TMP\tCelsius_TMP\n");
	
	for (fahr = 300; fahr >= 0; fahr -= 20)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f\t\t%6.1f\n", fahr, celsius);
	}

	return (0);
}
