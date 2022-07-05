#include <stdio.h>
/**
 * print_sign - check if n is positive or negative
 * @n: number to be considered
 * Return: 1 if n is greater than 0, -1 if n is less than 0, 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (write('+', 1));
	}
	else if (n < 0)
	{
		return (write('-', -1));
	}
	else
	{
		return (write('0' + 0, 0));
	}
}

