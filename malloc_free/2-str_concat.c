#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatena dos cadenas.
 * @s1: Primera cadena.
 * @s2: Segunda cadena.
 *
 * Return: Puntero a la nueva cadena concatenada, o NULL si falla la asignación.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* Tratar NULL como cadena vacía */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calcular la longitud de s1 y s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Asignar memoria para la cadena concatenada */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copiar s1 a concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copiar s2 a concat después de s1 */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0'; /* Terminar la cadena con '\0' */

	�return (concat);
}

