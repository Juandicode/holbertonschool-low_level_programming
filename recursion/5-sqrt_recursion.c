#include "main.h"
/**
 * froot - encuentra la raiz cuadrade de un numero
 * @n: Numero
 * @v1: Number to be powered by itself
 * Return: Number
 */
int froot(int v1, int n)
{
	if (v1 * v1 == n)
		return (v1);
	else if (v1 * v1 < n)
		return (froot(v1 + 1, n));
	return (-1);
}
/**
* _sqrt_recursion - la raiz cuadrada de un numero
* @n: Numero
* Return: Number
*/
int _sqrt_recursion(int n)
{
	int v2 = 0;

	return (froot(v2, n));
}
