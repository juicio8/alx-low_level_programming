#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 * Return: 0-14 x10 followed by new line
 */
void print_most_numbers(void)
{
	int i;
	int ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
