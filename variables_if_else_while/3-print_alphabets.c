#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char start = 'a';
	char end = 'A';

	for (start = 'a'; start <= 'z'; start++)
{
		putchar(start);
}
	for (end = 'A'; end <= 'Z'; end++)
{
		putchar(end);
}
		putchar('\n');
	return (0);
}
