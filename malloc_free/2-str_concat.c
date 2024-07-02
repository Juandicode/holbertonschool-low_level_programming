#include "main.h"
#include "length.c"
/**
 * *str_concat - Concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: String
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned long int p = 0;
	unsigned long int l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(((length(s1) + length(s2)) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[p] != '\0')
	{
		str[p] = s1[p];
		p++;
	}
	while (s2[v] != '\0')
	{
		str[p] = s2[l];
		l++;
		p++;
	}
	str[p] = '\0';
	return (str);
}
