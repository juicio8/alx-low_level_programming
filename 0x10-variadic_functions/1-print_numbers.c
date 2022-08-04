#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers.
 * @separator: a comma'
 * @n: number of args.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	char *ptr;
	va_list args;

	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

