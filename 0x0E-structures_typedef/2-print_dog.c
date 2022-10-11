#include "dog.h"
#include <stdio.h>

/**
 * print_dog - initializes a structure of type dog
 * @d: pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		printf("Name: %s\n", d->name == NULL? "(nil)": d->name);
		printf("Age: %7f\n",  d->age);
		printf("owner: %s\n", d->owner == NULL? "(nil)": d->owner);
	}

}
