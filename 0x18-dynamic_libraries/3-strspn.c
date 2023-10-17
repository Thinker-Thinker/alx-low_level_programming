#include "main.h"
/**
* _strspn - Entry point
*@s: pointer
*@accept: pointer
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
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
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (k);
}
