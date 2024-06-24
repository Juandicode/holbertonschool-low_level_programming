#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		printf("%d", p[i]);

		else
			printf(", %d", p[i]);
	}
		printf("\n");
}
