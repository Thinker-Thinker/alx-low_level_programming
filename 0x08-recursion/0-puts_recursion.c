#include "main.h"
/**
* _memset - Entry point
*@s: pointer
*@b: character
*@n: integer
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
	unsigned int i;

	for (i = 0; i != '\0'; i++)
		_putchar(s[i] + '0');
}
