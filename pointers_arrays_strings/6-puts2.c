#include "main.h"
/**
 * puts2 - bad comment 
 * @str: deammn
 */
void puts2 (char *str)
{
	int v1, v2;

	v1 =0;

		while ((str[v1]) != '\0')
		{
			v1++;
		}
		for (v2 = 0; v2 < v1; v2 += 2)
		{
			_putchar(str[v2]);
		}
		_putchar('\n');
}		
