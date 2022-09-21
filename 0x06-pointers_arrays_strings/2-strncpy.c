#include "main.h"
/**
* _strncopy - Entry point
*@dest: pointer
*@src: pointer
* Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (k = 0; dest[k] != '\0'; k++)
	{
	}

	for (j = 0; j < n && src[j]; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}


