#include "3-calc.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: number 1
 * @b: number 2
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(100);
}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: number 1
 * @b: number 2
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(100);
}
	return (a % b);
}

int _putchar(char c)
{
	return(write(1, &c, 1));
}
