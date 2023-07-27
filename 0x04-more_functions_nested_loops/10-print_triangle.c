#include "main.h"
/**
 * print_triangle - draw a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	for (i = (size-1); i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		for (j = i; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
