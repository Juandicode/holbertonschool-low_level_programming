#include "main.h"

/**
 * _puts_recursion - retornar un string
 * @s: string
 * Return: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
