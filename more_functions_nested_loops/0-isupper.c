#include "main.h"
/* more headers goes there */

/**
 * _isupper - Entry point
 *
 * Description: 'Esta es la descripcion'
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
