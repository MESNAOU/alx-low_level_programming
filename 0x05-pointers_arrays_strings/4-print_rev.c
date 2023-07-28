#include "main.h"

/**
 * print_rev - prints a string
 * @s: string's pointer
 */

void print_rev(char *s)
{
	int i = _strlen(char *s) - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
