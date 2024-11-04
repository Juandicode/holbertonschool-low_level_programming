#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first integer variable
 * @b: second integer variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int va;

	va = *a;
	*a = *b;
	*b = va;
}


