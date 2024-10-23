#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char v1;


	for (v1 = 'a'; v1 <= 'z'; v1++)
	{
		if (v1 != 'q' && v1 != 'e')
		{
			putchar(v1);
		}
	}
	putchar('\n');
	return (0);
}
