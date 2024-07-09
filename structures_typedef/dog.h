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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int length(char *str);
char *_strcpy(char *dest, char *src);


#endif	/* DOG_H */

