#include "main.h"
/**
 *  print_last_digit - holberton
 * Return: Always 0
*Description:print_last_digit
 *@u: holbi
 */
int print_last_digit(int u)
{
	int lg = u % 10;
	char ff;

	if (lg < 0)
		lg = -lg;

	_putchar('0' + lg);
	return (lg);
}
