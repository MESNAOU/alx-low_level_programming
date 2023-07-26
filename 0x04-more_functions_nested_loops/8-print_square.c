#include "main.h"
/**
 * print_square - draw a square
 * @n: size of the square
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		_putchar('\n');
	while (i < n)
	{
		while (j < n)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
