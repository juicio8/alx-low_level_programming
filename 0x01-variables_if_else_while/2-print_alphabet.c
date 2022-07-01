#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphab;

	alphab = 'a';

	while (alphab <= 'z')
	{
		putchar(alphab);
		alphab++;
	}
	putchar('\n');
	return (0);
}
