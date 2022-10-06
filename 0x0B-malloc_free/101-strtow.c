#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* strtow - Entry point
*@str :pointer  character value of integer c
* Return: Always 0 (Success)
*/
char **strtow(char *str)
{
	char *a;
	int i, j, l, k;

	k = 0;
	l = 0;
	if (str == NULL)
		return (NULL);
	for (k = 0; str[i][k]; k++)
			l++;
	l++;
	j = 0;
	a = malloc(sizeof(char) * l);
	if (a == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
		{
			a[j] = str[k];
			j++;
		}
		a[j] = '\n';
		j++;
	}
	a[j] = '\0';
	return (a);
}

