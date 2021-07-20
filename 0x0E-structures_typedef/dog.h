#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - new struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: true
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_a;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
