#include "main.h"

/**
* _strncat - Entry point
*@dest: pointer
*@src: pointer
*@n: integer
* Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}


