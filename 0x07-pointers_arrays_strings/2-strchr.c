#include <stdio.h>
/**
 * _stchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: the string from character found
 */
char *_stchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
		else
		{
			return (NULL);
		}
	}
}
