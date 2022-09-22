#include "main.h"
/**
* string_toupper - Entry point
*@s: pointer
*
* Return: Always 0 (Success)
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
