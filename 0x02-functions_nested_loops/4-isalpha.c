#include "main.h"
/**
* _isalpha - Entry point
*@c: character value of integer c
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
return (0);

}

