#include <stdio.h>
/**
* main - Prints the alphabet in lowercase, exluding q and e
* Return 0
*/

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
