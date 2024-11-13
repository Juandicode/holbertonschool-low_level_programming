#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - asigna memoria y termina el proceso si malloc falla
 *@b: tamaño de memoria paraasignar en bytes
 * Return: puntero a la memoria asignada, o exit con status 98 si mallof falla:
 */
void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);  /* Intentar asignar memoria */
	/* Si malloc falla (ptr es NULL), terminamos el programa con exit(98) */
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);  /*Si malloc tiene éxito, retornamos el puntero */
}
