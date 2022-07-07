#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check if a letter is uppercase
 * @c: input
 * Return: c: 1 if c is upper and c: 0 if it's lower
 *
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
