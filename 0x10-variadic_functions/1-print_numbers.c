#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers.
 * @seperstor: a comma'
 * @n: number of args.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && seperator)
		{
			printf("%s", seperator);
		}
		printf("\n");
		va_end(args);
	}
	
}
