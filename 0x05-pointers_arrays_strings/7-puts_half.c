#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the second half of a string
 * @str: string's pointer
 */

void puts_half(char *str)
{
	int nb = _strlen(str) / 2;
	int i;
	int c;
	int r = _strlen(str) % 2;

	switch (r)
	{
		case 0:
			c = nb;
			break;
		case 1:
			c = nb + 1;
			break;
	}
	for (i = 0; i < nb; i++)
	{
		_putchar(*(str + c + i));
	}
	_putchar('\n');
}
