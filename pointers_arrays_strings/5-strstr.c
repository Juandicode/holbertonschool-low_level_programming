#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring in a string
 * @haystack: The main string to search within
 * @needle: The substring to search for
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
	char *start = haystack;
	char *sub = needle;

	/* Check if substring matches */
	while (*haystack && *sub && *haystack == *sub)
	{
		haystack++;
		sub++;
	}

	if (*sub == '\0') /* If we've reached the end of needle, match found */
		return (start);
	haystack = start + 1; /* Move haystack to the next character to continu */
	}

	return (NULL); /* no match fount */
}
