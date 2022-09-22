#include "main.h"
/**
*_strcmp - Entry point
*@s1: pointer
*@s2: pointer
* Return: Always 0 (Success)
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	for (i = 0; s2[i] != '\0'; i++)
	{
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
	}

	for (j = 0; j < i && s2[j]; j++)
	{
		if (s2[j] != s1[j])
			return (s1[j] - s2[j]);

	}
	return (0);
}


