#include "main.h"

/**
* _strstr - Entry point
*@haystack: pointer
*@needle:pointer
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);

	}
	return (0);
}
