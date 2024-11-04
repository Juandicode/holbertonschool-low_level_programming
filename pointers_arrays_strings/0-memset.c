#include "main.h"

/**
 * _memset - fills the first n bytes
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


		for (i = 0; i < n; i++)
		{
			s[i] = b; /* Asigna el byte b a la posición i del buffer*/
		}
	return (s); /* Devuelve el puntero al inicio del buffer */
}
