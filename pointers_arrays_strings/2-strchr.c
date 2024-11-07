#include "main.h"
#include <stddef.h>
/**
 * _strchr - localiza la primera ocurrencia de un carácter en una cadena.
 * @s: cadena de caracteres en la que buscar.
 * @c: carácter a buscar.
 *
 * Return: un puntero a la primera ocurrencia de c en s o NULL si.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')  /* Recorrer la cadena hasta el final */
	{
		if (*s == c)  /* Comprobar si el carácter actual es c */
	{
		return (s);  /* Retornar el puntero a la ocurrencia de c */
	}
	s++;  /* Mover al siguiente carácter */
	}

	/* Si no se encuentra c, devolver NULL */
	if (c == '\0')  /* Si el carácter es '\0', devolvr punter al final d cadna */
	{
		return (s);
	}

	return (NULL);
}
