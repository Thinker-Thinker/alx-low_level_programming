#include "main.h"
/**
* rev_string - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
void rev_string(char *s)
{
	int i;
	int j;
	char str[5000];

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		*(str + i) = *(s + i);
	}
	for (; s[i - 1] != '\0'; i--)
	{
		*(s + i - 1) = *(str + j);
		j++;

	}
}


