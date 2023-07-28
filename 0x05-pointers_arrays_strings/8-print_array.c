#include "main.h"

/**
 * print_array - prints an array's elements
 * @a: array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(*(a + i));
	}
	_putchar('\n');
}
