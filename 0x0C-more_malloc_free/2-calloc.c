#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Entry point
*@b: character value of integer c
* Return: Always 0 (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; a[i]; i++)
		a[i] = '0';
	return (a);
}

