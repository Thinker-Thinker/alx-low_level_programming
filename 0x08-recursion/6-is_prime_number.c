#include "main.h"
/**
*sqrt_calc- Entry point
*@n: integer
*@j: integer
* Return: Always 0 (Success)
*/
int prime_calc(int n, int j)
{
	if (n % j == 0)
		return (0);
	if (j == 1)
		return (1);
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
	return (prime_calc(n, n));

}
