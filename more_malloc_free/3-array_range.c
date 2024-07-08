#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - arrays bro
 *@min: minimum
 *@max: maximum
 *Return: nothing to return
 */
int *array_range(int min, int max)
{
	int *abc;
	int i = 0;

	if (min > max)
	return (NULL);
	abc = malloc((max - min + 1) * sizeof(int));
	if (abc == NULL)
	return (NULL);
	while (min <= max)
	{
	abc[i] = min;
	i++;
	min++;
	}

	return (abc);
}
