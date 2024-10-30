#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of times the character : should be printed
 * Return: Always 0.
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		a++;
	}
	_putchar('\n');
}
