#include "main.h"

/**
 * swap_int - swap 2 integers
 * @a: integer1
 *@b: integer2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

