#include "main.h"
/**
* rev_string - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
void rev_string(char *s)
{
	int i;
	char m[5000];
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	j = i;
	for (; s[i - 1] != '\0'; i--)
	{
		*m = *s[i - 1];
		_putchar(i);

	}
	*s = *m;
}


