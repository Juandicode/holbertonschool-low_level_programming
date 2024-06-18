#include "main.h"
/**
 * print_sign - Entry Point
 * Return: ???
 * Description: this is a description
 * @n: nnn
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
}
}

