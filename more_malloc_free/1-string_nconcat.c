#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - retorna un puntero a un nuevo espacion en meoria q
 * contiene s1 seguido de los primeros n bytes de s2.
 * @s1: primer string pa concatenar
 * @s2: segundo string pa concatenar los primeros n bytes del string
 * @n: variable
 * Return: puntero a string_nconcat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, total_len, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = ""; /* si s1 y s2 es igual a null q d eun string vacio */
		s2 = "";
	}
		while (s1[len1] != '\0') /* largo s1 */
		{
			len1++;
		}

		while (s2[len2] != '\0' && len2 < n) /* largo s2 y q imprima n bytes de s2 */
		{
			len2++;
		}
		total_len = len1 + len2 + 1;
		/* Reservar memoria para la nueva cadena */
	result = (char *)malloc(total_len * sizeof(char));
	if (result == NULL)
	{
	/* Si no se puede asignar memoria, retornar NULL */
		return (NULL);

	 /* Copiar s1 a la nueva cadena */
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	/* Copiar los primeros n caracteres de s2 */
	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}
	/* Añadir el carácter nulo al final de la cadena */
	result[i + j] = '\0';
	}
	return (result);
}
