#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 0;

	while (a <= 9)
	{
		putchar((a % 10) + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
