#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory usind malloc
 * @b: Bytes
 * Return: None 
 */ 
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
	
	{
		exit(98);
	}
	return (ptr);
}
