#include "main.h"
#include <stdio.h>

int _sqrt_from(int n, int x);
/**
 * _sqrt_recursion - calculate racine n
 * @n: number
 *
 * Return: racine
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 1)
	{
		return (1);
	} else if (n == 0)
		return (0);
	return (_sqrt_from(n, 2));
}
/**
 * _sqrt_from - test if x a root
 * @n: number
 * @x: supposed root
 *
 * Return: the root or -1
 */
int _sqrt_from(int n, int x)
{
	int p = x * x;

	if (p == n)
	{
		return (x);
	} else if (p < n)
		return (_sqrt_from(n, x + 1));
	return (-1);
}
