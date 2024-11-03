#include "main.h"
/**
 * *_strcpy - print
 *
 * @dest: first string
 * @src: second string
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
