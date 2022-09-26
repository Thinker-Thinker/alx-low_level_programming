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

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i] == needle[j])
					i++;
				else
					break;
			}
			return (haystack + i - j);
		}

	}
	return (0);
}
