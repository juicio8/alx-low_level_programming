#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns no of elements in a list
 * @h: pointer to list head
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
