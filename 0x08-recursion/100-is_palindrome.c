#include "main.h"
/**
* _prinnt_rev_recursion - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
char _prinnt_rev_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	_prinnt_rev_recursion(s + 1);
	return (*s);


}

/**
* is_palindrome - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
int is_palindrome(char *s)
{
	char *j;
	int i;
	
	i = 0;
	if (*s == ' ')
		return (1);
	j = _prinnt_rev_recursion(s);
	if (s[i] ==j[i])
	{
		for (i = 0; s[i] == j[i]; i++)
			{}
		return (1);
	}
	return (0);


}
