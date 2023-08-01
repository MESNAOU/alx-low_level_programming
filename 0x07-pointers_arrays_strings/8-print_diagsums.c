#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - sum diagonales
 * @a: square matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;
	int *p1, *p2;

	for (i = 0; i < size; i++)
	{
		p1 = a + (i * size + i) * 4;
		p2 = a + (i * size + size - i - 1) * 4;
		s1 += *p1;
		s2 += *p2;
	}
	printf("%d, %d", s1, s2);
}

