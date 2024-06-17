#include <studio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i <= 15; i++)
{
if (i < 10)
putchar(i + '0');
else
putchar('\n');
return (0);
}
