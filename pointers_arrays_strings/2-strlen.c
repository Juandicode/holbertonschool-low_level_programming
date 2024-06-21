#include "main.h"

/**
*_strlen - returns the lenght of a string
* @s: valor de la variable
*return _stren: lenght
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
