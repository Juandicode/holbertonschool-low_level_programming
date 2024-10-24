#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0'); /* Convert integer to corresponding character */
	}
	putchar('\n'); /* Print newline at the end */

	return (0);
}

