#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - sum diagonales
 * @a: square matrix
 * @size: size
 */
void print_diagsums(int *a[], int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i][i];
		s2 += a[i][size - i - 1];
	}
	printf("%d, %d", s1, s2);
}

