#include <stdio.h>
/**
 * _isdigit - check if argument is a digit
 * @c: input
 * Return: 1 if is a digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (0);
	else
		return (1);
}
