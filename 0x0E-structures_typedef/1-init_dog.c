#include <stdio.h>
#include "dog.h"

/**
 * init_dog : initialize a variable of type struct dog
 * @d: pointer  to struct dog
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
