#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: array's size
 */

void reverse_array(int *a, int n)
{
	int end = n - 1;
	int start = 0;
	int c;

	while (start < end)
	{
		c = *(a + end);
		*(a + end) = *(a + start);
		*(a + start) = c;
		end--;
		start++;
	}
}
