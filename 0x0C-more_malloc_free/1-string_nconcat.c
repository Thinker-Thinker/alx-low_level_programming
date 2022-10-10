#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* string_nconcat - Entry point
*@s1:pointer  character value of integer c
*@s2:pointer  character value of integer c
*@n: number of digitys from s2
* Return: Always 0 (Success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, l, k;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		k = 0;
	else
	{
		for (l = 0; s2[l]; l++)
				;
		if (n <= l)
			k = n;
		else
			k = l;
	}
		a = malloc(sizeof(char) * (i + k + 1));
	if (a == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = s1[j];
	for (j = 0; j < k; j++)
		a[j + i] = s2[j];
	a[i + k] = '\0';
	return (a);
}

