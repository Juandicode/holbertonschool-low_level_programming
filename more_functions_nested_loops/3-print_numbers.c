#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Description: 'Esta es una descripcion'
 * Return: void
 */
void print_numbers(void)
{
    int i;

    for (i = '0'; i <= '9'; i++)
    {
        putchar(i);
    }
    putchar('\n');
}
