#include "main.h"
/**
* cap_string - Entry point
*@s: pointer
*
* Return: Always 0 (Success)
*/
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i] == '\t' || s[i] == '\n' || s[i] == ' '
			|| s[i] == ',' || s[i] == ';'
			|| s[i] == '.' || s[i] == '!'
			|| s[i] == '\"' || s[i] == ')' || s[i] == '('
			|| s[i] == '{' || s[i] == '}')
			&& (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		i++;
	}
	return (s);
}
