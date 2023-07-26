#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - get unity number
 *@n: char to test
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	r = _abs(r);
	_putchar(r + 48);
	return (r);
}
