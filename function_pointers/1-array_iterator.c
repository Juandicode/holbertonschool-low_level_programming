#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array of iterative over
 * @size: the size of the array
 * @action: the function to ececute on each element
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
