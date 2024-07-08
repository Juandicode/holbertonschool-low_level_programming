#include "main.h"
#include "length.c"
/**
 * *string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: unsigned int 
 * Return: String concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int y = 0;
	unsigned int b = 0;
	unsigned int lens1;
	unsigned int lens2;
	char *str;

	/* Tratamos strings nulos*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	    /* la longitud d stringss */
	lens1 = length(s1);
	lens2 = length(s2);
	/* Si n es mayor a Len2, agarra su valor */
	if (n > lens2)
		n = lens2;
	/* espacio dinamico de str */
	newstr = malloc((lens1 + n + 1));
	/* Malloc  error */
	if (wstr == NULL)
		return (NULL);
	/* Copiamos String1 */
	while (y < lens1)
	{
		newstr[y] = s1[y];
		y++;
	}
	/* Copiamos String2 */
	while (b < n)
	{
		newstr[y] = s2[b];
		y++;
		b++;
	}
	/* Colocamos Null al final del String */
	newstr[y] = '\0';
	return (newstr);
}
