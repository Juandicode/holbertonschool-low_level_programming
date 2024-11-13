#include <stdlib.h>

/**
 * _strdup - Retorna un puntero a un nuevo espacio de memoria que contiene
 *           una copia de la cadena dada como parámetro.
 * @str: Cadena a duplicar.
 *
 * Return: Puntero a la cadena duplicada o NULL si str es NULL o falla la asignación.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	/* Calcular la longitud de la cadena */
	while (str[length])
	length++;

	/* Asignar memoria para la cadena duplicada */
	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	/* Copiar la cadena */
	for (i = 0; i < length; i++)
		dup[i] = str[i];
	dup[length] = '\0';  /* pa q la cadena termine en null */

	return (dup);
}

