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
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil) \n");
		if (d->age != NULL)
			printf("Age: %7f\n", d->age);
		else
			printf("Age: (nil) \n");
		if (d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
		printf("owner: (nil) \n");
	}

}
