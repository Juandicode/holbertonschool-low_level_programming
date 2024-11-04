#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: first variable
 * @src: second variable
 * @n: int variable
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{

	{

		char *ptr = dest;
		int i = 0;

			while (*ptr != '\0')
			{
			ptr++;
			}

			while (*src != '\0' && i < n)
	{
			*ptr = *src;
			ptr++;
			src++;
			i++;
	}
			*ptr = '\0';

	return (dest);
	}
}
