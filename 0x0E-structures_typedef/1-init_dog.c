#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 *
 * @d: struct type
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void(nothing)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
