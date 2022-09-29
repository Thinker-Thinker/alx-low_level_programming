#include "main.h"

/**
* _strlen - return length of string
* @str: string to check
*
* Return: length of str
*/
int _strlen(char *str)
{
if (*str == '\0')
	return (0);
else
	return (1 + _strlen(str + 1));
}
/**
* palindrome - Entry point
*@s: pointer
*@i: integer
*@j: integer
* Return: Always 0 (Success)
*/
int palindrome(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (palindrome(i + 1, j - 1, s));
}

/**
* is_palindrome - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (palindrome(0, i, s));


}
