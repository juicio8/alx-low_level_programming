#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check if a letter is uppercase
 * Return: c: 1 if c is upper and c: 0 if it's lower
 *
 */
int _isupper(int c)
{
	if (isupper(c) == 1)
	{
		return (c: 1);
	}
	else
		return (c : 0);
}
