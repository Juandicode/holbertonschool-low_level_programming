#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 *
 * Description: alphabet in lowercase
 * Return: void
 */
int _isupper(int c)
{
char r;

for (r = 'A'; r <= 'Z'; r++)
	{
		if (r == c)
		{
			return (1);
		}
	}
		return (0);
}
