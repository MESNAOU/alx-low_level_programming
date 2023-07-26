#include "main.h"
/**
 * print_line - draw a line
 * @n: length of the line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
