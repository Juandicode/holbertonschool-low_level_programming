#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    /* Copia byte por byte desde src a dest */
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i]; /* Copiar el byte de src a dest */
    }

    return (dest); /* Devuelve el puntero al inicio de dest */
}

