#include <stdio.h>
/**
 * print_alphabet_x10 - dislay all alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	while (i < 11)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
		i++;
	}
}
