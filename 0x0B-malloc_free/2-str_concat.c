#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* str_concat - Entry point
*@s1:pointer  character value of integer c
*@s1:pointer  character value of integer c
* Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, k;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		;
	for (k = 0; s2[k]; k++)
		;

	i = i + 1;
	k++;
	a = malloc(sizeof(char) * (i + k));

	for (j = 0; j < i; j++)
		a[j] = s1[j];
	for (j = 0; j < k; j++)
		a[j + i - 1] = s2[j];
	return (a);
}

