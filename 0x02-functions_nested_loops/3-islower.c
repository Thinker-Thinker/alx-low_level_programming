#include "main.h"
/**
* _islower - Entry point
*@c: character value of integer c
* Return: Always 0 (Success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
			return (1);
	return (0);

}

