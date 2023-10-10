#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print func
 *
 * @d: struct pointer
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	if (d->name == NULL)
		d->name = "nill";
	if (d->owner == NULL)
		d->owner = "nill";
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
