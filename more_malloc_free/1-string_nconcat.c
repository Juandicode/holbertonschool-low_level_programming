#include "main.h"
#include "length.c"
/**
 * *str_concat - Concatenates 2 strings
 * @s1: String 1
 * @s2: String 2
 * n@: unsigned int
 * Return: String
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	
	char *str;
	
	unsigned int len_s1 = length(s1);
	unsigned int len_s2 = length(s2);

	str = malloc((len_s1 + n + 1) * sizeof(char));
	if (str == NULL) 
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < len_s1; i++)
	{
		str[i] = s1[i];
	}
	
	for (unsigned int i = 0; i < n && i < len_s2; i++)
	{
		str[len_s1 + i] = s2[i];
	}

	str[len_s1 + n] = '\0';

	return str;
}
