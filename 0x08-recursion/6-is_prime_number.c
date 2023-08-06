#include "main.h"
#include <stdio.h>

int divide(int n, int x);
/**
 * is_prime_number - check if it's a prime number
 * @n: number
 *
 * Return: boolean
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	} else if (n == 2)
		return (1);
	return (divide(n, 2));
}
/**
 * divide - test if x devide n
 * @n: number
 * @x: supposed divisible
 *
 * Return: bool
 */
int divide(int n, int x)
{
	int p = n % x;

	if (p == 0)
	{
		return (0);
	} else if ((x + 1) < n / 2)
		return (divide(n, x + 1));
	return (1);
}
