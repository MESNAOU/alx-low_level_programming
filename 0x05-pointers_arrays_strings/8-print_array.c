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
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + n - 1));
}
