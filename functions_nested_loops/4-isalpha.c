#include "main.h"
/**
 * _isalpha - Entry Point
 * Return: Always 0
 * Description: this is a description
 * @c: ccc
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
