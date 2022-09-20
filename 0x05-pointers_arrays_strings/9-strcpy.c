#include "main.h"
/**
* _strcpy - Entry point
*@dest: pointer
*@src: pointer
* Return: Always 0 (Success)
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	j = i + 1;
	i = 0;
		
	for (i = 0; i < j; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}


