#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function to free dogs
 * @d: dog needs to free out
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
