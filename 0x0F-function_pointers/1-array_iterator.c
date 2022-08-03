#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - iterates over elements in an array.
 * @array: array to be considered.
 * @size: length of array;
 * @action: pointer to function
 *
 * Return: 0;
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
