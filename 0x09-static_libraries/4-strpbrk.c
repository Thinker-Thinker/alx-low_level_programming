#include "main.h"
/**
* _strpbrk - Entry point
*@s: pointer
*@accept:pointer
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k;

	k = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				return (s + i);
			}
		}
	}
	return (0);
}
