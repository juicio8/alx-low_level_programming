#include <stdio.h>
/**
 * int _islower - check if letter is lower
 * @c: character to check
 * Return: 0 (Success)
 */
int  _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
