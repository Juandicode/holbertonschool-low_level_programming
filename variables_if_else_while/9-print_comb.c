#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; numero <= 9; number++)
{
	putchar(number + '0');
	if (number != 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');

	return (0);
}

