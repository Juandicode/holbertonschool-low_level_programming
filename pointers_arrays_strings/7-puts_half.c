#include "main.h"
/**
 * puts_half - that prints half of a string
 * @str: esta es la cadena
 */
void puts_half(char *str)
{
	int v1, n, f;

	v1 = 0;

	while (str[v1] != '\0')
	{
		v1++;
	}

	if (v1 % 2 == 0)
	{
		for (f = v1 / 2; str[f] '\0'; f++)
		{
			_putchar(str[f]);
		}
	} else if (v1 % 2)
	{
		for (n = (v1 - 1) / 2; n < v1 - 1; n++)
		{
			_putchar(str[n + 1];
		}
	}
	_putchar('\n');
}
