#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* str_concat - Entry point
*@s1:pointer  character value of integer c
*@s2:pointer  character value of integer c
* Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, k;

	i = 0;
	k = 0;
	if (s1 == NULL && s2 == NULL)
	{
		a = malloc(sizeof(char));
		a[0] = '\0';
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			;
		i++;
	}
	if (s2 != NULL)
	{
		for (k = 0; s2[k]; k++)
			;
		k++;	

	}
		a = malloc(sizeof(char) * (i + k - 1));
	if (a == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = s1[j];
	for (j = 0; j < k; j++)
	{
		if (i != 0)
			a[j + i - 1] = s2[j];
		else
			a[j] = s2[j];
	}
	return (a);
}

