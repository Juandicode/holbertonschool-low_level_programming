#include "main.h"
/**
 * print_alphabet_x10 - print
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int repeat;
	char alphabeto;

	for (repeat = 0; repeat < 10; repeat++)
{
	for (alphabeto = 'a'; alphabeto <= 'z'; alphabeto++)
{
	_putchar(alphabeto);

}
	_putchar('\n');
}
}
