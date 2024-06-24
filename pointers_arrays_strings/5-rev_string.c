#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int v1, v2, v3;
	char ch;

	v2 = 0;
	v3 = 0;

	while (s[v2] != '\0')
	{
		v2++;
	}
	v3 = v2 - 1;

	for (v1 = 0; v1 < v2 / 2; v1++)
	{
		ch = s[v1];
		s[v1] = s[v3];
		s[v3--] = ch;
	}
}
