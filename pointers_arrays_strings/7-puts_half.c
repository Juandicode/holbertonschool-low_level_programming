#include "main.h"
/**
 * puts_half - print half of a string
 * @str: variable
 * Return: 0
 */
void puts_half(char *str)
{
	int length = 0;
	int half = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length + 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
