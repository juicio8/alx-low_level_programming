#include <stdio.h>
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphab;

	alphab = 'a';

	do {
		if (alphab == 'e' || alphab == 'q')
		{
			alphab++;
			continue;
		}
		putchar(alphab);
		alphab++;

	} while (alphab <= 'z');
	putchar('\n');
	return (0);
}
