#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int x;
	int a = 0, b = 0, c = 0, d = 0;

	while (x < 1440)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(':');
		putchar(c + '0');
		putchar(d + '0');
		putchar('\n');
		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		x++;


	}
}
