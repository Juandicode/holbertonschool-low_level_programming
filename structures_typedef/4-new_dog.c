#include "dog.h"

/**
 * new_dog - Creates a new dog structure using static memory.
 * @name: Pointer to the dog's name (max 100 characters).
 * @age: The dog's age.
 * @owner: Pointer to the dog's owner (max 100 characters).
 *
 * Return: Pointer to the new dog structure, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	static dog_t new_dog;
	static char name_copy[100];
	static char owner_copy[100];
	int i;

	/* Copy name */
	for (i = 0; name[i] != '\0' && i < 99; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	/* Copy owner */
	for (i = 0; owner[i] != '\0' && i < 99; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';

	/* Assign values to the static dog structure */
	new_dog.name = name_copy;
	new_dog.age = age;
	new_dog.owner = owner_copy;

	return &new_dog;
}

