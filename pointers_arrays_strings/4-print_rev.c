#include "main.h"

/**
*print_rev - give us back the script in rev
*Return: nothing
*@s: stringgg
*/

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
		x++; /* ultima posicion string*/

	for (y = (x - 1); y >= 0; y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}
