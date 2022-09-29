#include "main.h"
/**
* _print_rev_recursion - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
char _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	return (*s);


}

/**
* _print_rev_recursion - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
int is_palindrome(char *s)
{
	char j, i;
	
	i = 0;
	if (*s == ' ')
		return (1);
	j = _print_rev_recursion(s);
	if (s[i] ==j[i])
	{
		for (i = 0; s[i] == j[i]; i++)
			{}
		return (1);
	}
	return (0);


}
