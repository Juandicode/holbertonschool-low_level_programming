#include "main.h"
#include "length.c"
/**
 * *str_concat - Concatenates 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: String
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned long int i = 0;
	unsigned long int p = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(((length(s1) + length(s2)) + 1) * sizeof(char));/** malloc **/
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[p] != '\0')
	{
		str[i] = s2[p];
		p++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
