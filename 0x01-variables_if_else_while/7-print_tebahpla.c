#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphab;

	alphab = 'z';

	while (alphab >= 'a')
	{
		putchar(alphab);
		alphab--;
	}
	putchar('\n');
	return (0);
}
