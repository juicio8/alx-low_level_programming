#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 'a';

	while (a <= 9)
	{
		putchar((a % 10) + '0');
		a++;
	}
	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
