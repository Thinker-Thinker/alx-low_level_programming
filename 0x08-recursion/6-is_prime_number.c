#include "main.h"
/**
*prime_calc- Entry point
*@n: integer
*@j: integer
* Return: Always 0 (Success)
*/
int prime_calc(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0)
		return (0);
	return (prime_calc(n, j - 1));
}

/**
*is_prime_number - Entry point
*@n: pointer
* Return: Always 0 (Success)
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_calc(n, n - 1));

}
