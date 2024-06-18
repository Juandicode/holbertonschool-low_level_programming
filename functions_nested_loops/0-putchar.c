#include "main.h"

/**
 * main - prints _putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '_';
	int i = 0;

	while (i < 8)
	{
		_putchar(c);
		i++;
	}
	_putchar('\n');

	return (0);
}
