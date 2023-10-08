#include <stdio.h>

/**
 * main - Experimentation of \c use in printf
 *        when c is a character not list in section 2-3
 *
 * Return: 0 if success
 */
int main(void)
{
	printf("Those \\c don't produce anything special.\n");
	printf("\\z produces \z\n");
	printf("\\y produces \y\n");
	printf("\\o produces \o\n");

	return (0);
}
