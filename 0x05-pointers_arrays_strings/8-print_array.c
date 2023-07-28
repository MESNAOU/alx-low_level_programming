#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array's elements
 * @a: array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d",*(a + i));
		_putchar(',');
		_putchar(' ');
	}
	printf("%d",*(a + n - 1));
	_putchar('\n');
}

