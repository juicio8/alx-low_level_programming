#include <stdio.h>
/**
 * print_alphabet - display all alphabets
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
