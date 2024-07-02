#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - Crea un array de chars
 * @size: tamaño de un array
 * @c: Caracter para ser inizializado
 * Return: String
 */
char *create_array(unsigned int size, char c)
{
	char *v1;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (v1 == NULL)
		return (NULL);
	while (i < size)
	{
		v1[i] = c;
		i++;
	}
	return (v1);
}
