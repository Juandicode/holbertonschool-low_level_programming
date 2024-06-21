#include "main.h"
/**
 * print_rev - pritns a strings, in reverse
 * return: nad
 * @s:variable
 */

void print_rev(char *s)
{
    if (*s == '\0') {
        _putchar('\n');
        return;
    }

    print_rev(s + 1);
    _putchar(*s);
}
