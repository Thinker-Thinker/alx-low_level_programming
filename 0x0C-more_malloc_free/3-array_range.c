#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* malloc_checked - Entry point
*@b: character value of integer c
* Return: Always 0 (Success)
*/
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

