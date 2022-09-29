#include "main.h"
/**
* _print_rev_recursion - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
int wildcmp(char *s1, char *s2)
{
	int i;
	if (*s1 == *s2 && *s1 == '\0')
		return (1);
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s2 - 1 == '*' && *s2 != '*')
	{
		if (s2 != s1)
		{
			for (i = 0; s1; i++)
			{
				*s1 = *s1 + 1;
				if (s1 == s2)
					continue;
				return (0);
			}
		}
	}
	return (wildcmp(*(s1 + 1), *(s2 + 1)));
	

}
