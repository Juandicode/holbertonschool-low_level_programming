#include "main.h"
/**
 * _pow_recursion - retorna el valor de x elevado a la potencia de y
 * @x: x
 * @y: y
 * Return: 0.
 */
int _pow_recursion(int x, int y)
{
	/* caso base: cualquier numero elevado a la potencia de 0 es 1 */
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
