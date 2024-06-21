#include "main.h"
/**
 * print_rev - pritns a strings, in reverse
 * return: nad
 * @s:variable
 */

void print_rev(char *s)
{
if (*s == '\0')
	return;

print_rev(s + 1);
_putchar(*s);
_putchar('\n');
}
