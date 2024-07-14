#include "3-calc.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int num1, num2;

	if (argc != 4)
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(99);
	}

	_putchar(num1 + '0');
	_putchar('\n');

	return (0);
}
