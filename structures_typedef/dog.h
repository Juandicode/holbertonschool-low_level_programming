#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 *struct dog - estructura que toma 3 tipos de datos
 *@owner: owner of the dog
 *@name: name of the dog
 *@age: age of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
