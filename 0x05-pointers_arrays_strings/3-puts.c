#include "main.h"

/**
 * _puts - prints a string
 * @str: string's pointer
 */

void _puts(char *str)
{
	int i = 0;
	char c = *str;

	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = *(str + i);
	}
	_putchar('\n');
}
