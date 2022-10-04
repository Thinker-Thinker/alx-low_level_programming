#include "main.h"
/**
* create_array - Entry point
*@c: character value of integer c
*@size: unsigned int
* Return: Always 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
		return (NULL);
	a = malloc (sizeof(char) * size);
	if (a == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}

