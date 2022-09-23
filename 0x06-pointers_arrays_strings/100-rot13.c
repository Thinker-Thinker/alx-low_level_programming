#include "main.h"
/**
* rot13 - Entry point
*@s: pointer
*
* Return: Always 0 (Success)
*/
char *rot13(char *s)
{
	int i;
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 51; j++)
		{
			if (s[i] == alpha[j])
				s[i] = rot[j];
		}
		i++;
	}
	return (s);
}
