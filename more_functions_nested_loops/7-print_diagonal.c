#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line in the terminal
 * @n: number of times the character : should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int a = 0;
	int b;

		if  (n <= 0)
		{
			_putchar ('\n');
		}
			while (a < n)
		{
				for (b = 0; b < a; b++)
				{
					_putchar (' ');
				}
				_putchar ('\\');
				_putchar ('\n');
				a++;
		}

}
