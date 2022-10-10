#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - Entry point
*@nmemb: character value of integer c
*@size: unsigned integer
* Return: Always 0 (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		printf("%i", i);
		a[i] = 0;
	}
	return (a);
}

