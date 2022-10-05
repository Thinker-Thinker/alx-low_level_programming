#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _strdup - Entry point
*@str:pointer  character value of integer c

* Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i = i + 1;
	a = malloc(sizeof(char) * i);
	if (a == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = str[j];
	return (a);
}

