#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - that copies the string pointed to by src
 * @dest: pointer
 * @src: string
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int v1, v2;

	v1 = 0;

		while (src[v1] != '\0')
		{
			v1++;
		}
		for (v2 = 0; v2 < v1; v2++)
		{
			dest[v2] = src[v2];
		}
		dest[v2] = '\0';

		return (dest);
}
