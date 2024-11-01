#include "main.h"

/**
 * print_triangle - a function that prints a triangle 
 * @size: the size of the triangle
 * Return: (0)
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}	
 	for (a = 0; a < size; a++)
	{
			for  (b = size - a - 1; b > 0; b--)
			{
			_putchar(' ');
			}
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}
}

