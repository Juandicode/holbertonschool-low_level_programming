#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
for (int i = 0; i < 10; i++)
putchar(i + '0');
for (int i = 0; i < 6; i++)
putchar(i + 'a' - 10);
putchar('\n');
return (0);
}
