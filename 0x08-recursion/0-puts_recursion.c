#include "main.h"
/**
* _puts_recursion - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
	int i;

	_putchar(s[i] + '0');
	if (s[i] == '\0')
		_putchar('\n');
	else
		_puts_recursion(s[i + 1]);

}
