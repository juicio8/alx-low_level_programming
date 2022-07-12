#include <stdio.h>
/**
 * _strlen - prints length of a string
 * @s:  String to be counted
 * Return: string length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
