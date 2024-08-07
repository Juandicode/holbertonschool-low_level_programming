#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: variable array
 * @size: variable size
 * @cmp: pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !cmp || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
