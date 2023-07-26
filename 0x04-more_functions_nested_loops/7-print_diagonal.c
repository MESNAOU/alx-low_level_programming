#include "main.h"
/**
 * print_diagonal - draw a diagonal
 * @n: length of the diagonal
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		i++;
	}
	_putchar('\n');
}
