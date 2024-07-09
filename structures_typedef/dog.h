#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - info del perro
 *
 * @name: pointer for the dog's name
 * @age: dog age
 * @owner: pointer for the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
