#include <stdlib.h>
#include "main.h"
/**
 * create_array - array de chars inicializado con un char especifico (c).
 * @size: Tamaño del array.
 * @c: Carácter con el que inicializar el array.
 *
 * Return: Puntero al array o NULL si falla o si size es 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}
