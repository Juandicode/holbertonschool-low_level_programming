#include "main.h"
/**
 * print_rev - print
 *
 * @s: variable
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int back;

	while (s[length] != '\0')
	{
		length++;
	}
	for (back = length - 1; back >= 0; back--)
	{
		_putchar(s[back]);
	}
	_putchar('\n');
}
