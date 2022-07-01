#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphab;
	char alphabu;

	alphab = 'a';
	alphabu = 'A';

	while (alphab <= 'z')
	{
		putchar(alphab);
		alphab++;
	}
	while (alphabu <= 'Z')
	{
		putchar(alphabu);
		alphabu++;
	}
	putchar('\n');
	return (0);
}
