#include "main.h"
/**
 * _strlen - print the length of a string
 *
 * @s: length
 * Return: void
 */
int _strlen(char *s)
{
	int length = 0;

		while (*s != '\0')
		{
			length++;
			s++;
		}
		return (length);
}
