#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * length - calculates the length of the string
 * @str: the string
 * Return: 0
 */
int length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}

/**
 * *_strcpy - that copies the string pointed to by src
 * @dest: pointer
 * @src: string
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int v1, v2;

	v1 = 0;

	while (src[v1] != '\0')
	{
		v1++;
	}
	for (v2 = 0; v2 < v1; v2++)
	{
		dest[v2] = src[v2];
	}
	dest[v2] = '\0';

	return (dest);
}
/**
 * new_dog - function name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(length(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(length(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	
	return (new_dog);
}
