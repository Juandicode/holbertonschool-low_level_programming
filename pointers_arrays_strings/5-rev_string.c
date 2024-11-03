#include "main.h"
/**
 * rev_string - print
 *
 * @s: variable
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	char *start, *end, data;

	while (s[length] != '\0')
	{
		length++;
	}
	start = s;
	end = s + length - 1;

	while (end > start)
	{
		data = *start;
		*start = *end;
		*end = data;

		start++;
		end--;
	}
}
