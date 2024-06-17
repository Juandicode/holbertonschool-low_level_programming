#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
char R;
char D;
for (D = 'A'; D <= 'Z'; D++)
{
putchar(D);
}
for (R = 'a'; R <= 'z'; R++)
putchar(R);
}
putchar('\n');
return (0);
}
