#include <stdio.h>
#include "main.h"
/**
 * print_list - Prints all elements of a list
 * @h: A linked list
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	void *ptr;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
