#include <stdio.h>
/**
 * print_last_digit - print last digit of a number
 *
 * Return: Always return nv
 */
int print_last_digit(int c)
{	
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}

}
