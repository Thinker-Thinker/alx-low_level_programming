#include "main.h"
/**
* rev_string - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
void rev_string(char *s)
{
	int i;
	char temp[5000];

	temp[5000] = *s;
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (; s[i - 1] != '\0'; i--)
	{
		s[i - 1] = temp[i - 1];
	}
}

