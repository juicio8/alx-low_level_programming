#include "dog.h"
#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees struct dog
 * @d: pointer
 * return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
