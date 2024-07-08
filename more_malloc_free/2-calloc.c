#include <stdlib.h>
#include "main.h"
#include "length.c"
/**
 * _calloc - allocates memory for an array
 * @nmemb: variable 1
 * @size: size of the array
 * Return: Nothing to return
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
	*((char *)ptr + i) = 0;
	i++;
	}
/* *_calloc - allocates */
	return (ptr);
}
