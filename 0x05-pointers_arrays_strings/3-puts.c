#include "main.h"

/**
 * _strlen - prints a string
 * @s: string's pointer
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
