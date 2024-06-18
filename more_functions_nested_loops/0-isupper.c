#include "main.h"
/* more headers goes there */

/**
 * _isupper - Entry point
 *
 * Description: 'Escribe un texto'
 * @c: caracter a revisar
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
