#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees a dog
 * @d: variable del pointer
 * Return : (0)
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
