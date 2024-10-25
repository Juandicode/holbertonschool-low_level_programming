#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char pepito[] = "0123456789abcdef";
	int i = 0;

		for (i = 0; i < 16; i++)
		{
			putchar(pepito[i]);
		}
		putchar('\n');

	return (0);
}
