#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find te square root of
 * Return: the natural square root of n , or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{

	if (n < 0)

		return (-1);
	int i = 1;

	while (i * i <= n)
	{
	if (i * i == n)
		return (i);
		i++;
	}
	return (-1);
}
