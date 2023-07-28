#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string
 * @s: string's pointer
 */

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
