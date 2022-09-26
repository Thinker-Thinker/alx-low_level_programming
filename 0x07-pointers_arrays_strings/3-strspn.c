#include "main.h"
/**
* _memset - Entry point
*@s: pointer
*@b: character
*@n: integer
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	k = 0;
	for (i = 0; s[i]; i++)
	{
		for (j=0; accept[j]; j++)
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
