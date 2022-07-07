#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c[];

	i = 0;
	c = positive_or_negative(i);
	printf("%s", c);	

	return (0);
}
