#include "main.h"
/**
 * primo - Divides number
 * @num: Numero que va adividir
 * @n: Number divided
 * Return: Resultado
 */
int primo(int num, int n)
{
	if (n <= 1)
		return (0);
	if (n == num)
		return (1);
	if (n % num == 0)
		return (0);

	return (primo(num + 1, n));
}
/**
 * is_prime_number - mira si es numero primo
 * @n: Number
 * Return: 1 (Success) - 0 (Otherwise)
 */
int is_prime_number(int n)
{

	return (primo(2, n));
}
