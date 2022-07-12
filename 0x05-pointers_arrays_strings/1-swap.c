#include <stdio.h>
/**
 * swap_int - swap values in variables
 * @a: first value
 * @b: second value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a
	*a = *b;
	*b = aux;
}
