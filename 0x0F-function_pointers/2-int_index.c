#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - checks if there's an integer.
 * @array: array to be considered.
 * @size: size of array;
 * @cmp: function pointer
 *
 * Return: various.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
