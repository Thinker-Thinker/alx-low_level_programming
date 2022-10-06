#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* str_concat - Entry point
*@s1:pointer  character value of integer c
*@s2:pointer  character value of integer c
* Return: Always 0 (Success)
*/
char *argstostr(int ac, char **av)
{
	char *a;
	unsigned int i, j, l, k;

	i = 0;
	k = 0;
	l= 0;
	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i > ac; i++)
	{		
		for (k = 0; av[i][k]; k++)
			l++;
		l++;

	}
	l++
	j = 0;
	a = malloc(sizeof(char) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0;i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			a[j] = av[i][k];
			j++;
		}
		a[j] = '\n';
		j++;
	}
	a[j] = '\0';
	return (a);
}

