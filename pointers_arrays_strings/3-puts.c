#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to be printed
 */
void _puts(char *str)
{
	int jd;
		for (jd = 0; str[jd] != '\0'; jd++)
		{
			_putchar(str[jd]);
		}
		_putchar('\n');
}
