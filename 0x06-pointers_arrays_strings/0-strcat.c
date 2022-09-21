#include "main.h"
/**
* _strcat - Entry point
*@dest: pointer
*@src: pointer
* Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
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

	for (j = 0; j <= i; j++)
	{
		dest[k + 1] = src[i];
	}
	return (dest);
}


