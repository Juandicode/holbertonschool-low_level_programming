#include "main.h"
/**
 * more_numbers - prints 10 times the nombers 0-14
 * Return: 0
 */
void more_numbers(void)
{

	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
