#include "main.h"

int _sqrt_from(int n, int x);
/**
 * _pow_recursion - calculate x raised to the power of y.
 * @x: base
 * @y: puissance
 *
 * Return: power
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 1)
	{
		return (1);
	}
	return (_sqrt_from(n, n / 2));
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
	if (x * x == n)
	{
		return (x);
	} else if (x > 0)
		return _sqrt_from(n, x - 1);
	return (-1);
}
