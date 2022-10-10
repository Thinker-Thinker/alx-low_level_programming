#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _realloc - Entry point
*@ptr: pointer
*@old_size: minimum character value of integer c
*@new_size: maximum character
* Return: Always 0 (Success)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	int i, j;
	char *_ptr;

	_ptr = ptr;
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
		a[i] = _ptr[i];
	free(ptr);
	return (a);
}

