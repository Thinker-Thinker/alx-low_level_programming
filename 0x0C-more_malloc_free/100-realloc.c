#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* ptr - Entry point
*@old_size: minimum character value of integer c
*@new_size: maximum character
* Return: Always 0 (Success)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *a;
	int i, j;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	a = malloc(new_size);
	j = new_size;
	if (old_size < new_size)
		j = old_size;
	for (i = 0; i < j; i++)
		a[i] = ptr[i];
	return (a);
}

