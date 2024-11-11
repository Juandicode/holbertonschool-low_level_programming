#include "main.h"
/**
 * _pow_recursion - retorna el valor de x elevado a la potencia de y
 * @x: x
 * @y: y
 * Return: 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
