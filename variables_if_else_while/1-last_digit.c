#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int lp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lp = n % 10;

	if (lp > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lp);
	}
	else if (lp == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lp);
	}
	else if (lp < 6 && lp != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lp);
	}

	return (0);
}

