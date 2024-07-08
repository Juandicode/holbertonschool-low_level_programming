#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array created
 * @min: minimum
 * @max: maximum
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);

	}

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = min + 1;
		i++;
	}

	return (array);
}
