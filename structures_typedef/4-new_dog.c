#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* length - calculates the length of the string
* @str: the string
* Return: the length of the string
*/
int length(char *str)
{
	int i = 0;
	if (str == NULL)
	return 0;


	while (str[i] != '\0')
	{
	i++;
	}
	return i;
}

/**
* _strcpy - that copies the string pointed to by src
* @dest: pointer
* @src: string
* Return: the pointer
*/
char *_strcpy(char *dest, char *src)
{
	int v1, v2;
	if (dest == NULL || src == NULL)
	return NULL;

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

	return dest;
}

/**
* new_dog - Creates a new dog
* @name: Name of the new dog
* @age: Age of the new dog
* @owner: Owner of the new dog
* Return: dog_t structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	char *new_owner, *new_name;
	dog_t *newdog;

	if (name == NULL || owner == NULL)
	return NULL;

	len_name = length(name) + 1;
	len_owner = length(owner) + 1;


	new_name = malloc(sizeof(char) * len_name);
	if (new_name == NULL)
	return NULL;
	_strcpy(new_name, name);
	new_owner = malloc(sizeof(char) * len_owner);
	if (new_owner == NULL)
	{
	free(new_name);
	return NULL;
	}
	_strcpy(new_owner, owner);
	/* Malloc de la nueva estructura*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
	free(new_name);
	free(new_owner);
	return NULL;
	}
	/* Le asignamos valor al atributo name, age y owner*/
	newdog->name = new_name;
	newdog->age = age;
	newdog->owner = new_owner;
	/* Retornamos la nueva estructura formada */
	return newdog;
}
