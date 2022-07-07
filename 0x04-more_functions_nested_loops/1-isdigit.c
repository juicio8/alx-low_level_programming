#include <stdio.h>
/**
 * _isdigit - check if argument is a digit
 * @c: input
 * Return: 1 if is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return ("%d: 1", c);
	else
		return ("%d: 0", c);
}
