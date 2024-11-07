#include "main.h"

/**
* _strspn - obtiene la longitud de un prefijo de la cadena s que
*           solo contiene caracteres que están en accept.
* @s: cadena de caracteres a analizar.
* @accept: conjunto de caracteres válidos.
*
* Return: la longitud del prefijo encontrado.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	char *a;

	while (*s)  /* Recorrer cada carácter de la cadena s */
	{
		/* Verificar si el carácter actual de s está en accept */
		for (a = accept; *a != '\0'; a++)
	{
		if (*s == *a)  /* Si encontramos una coincidencia */
		{
			count++;  /* Incrementamos el contador */
			break;
		}
	}

	/* Si el carácter actual de s no está en accept, terminamos */
	if (*a == '\0')
	{
		break; /* corta */
	}

	s++;  /* Avanzo 1 de s */
	}

	return (count);
}
