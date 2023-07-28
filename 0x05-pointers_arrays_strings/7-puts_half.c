#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints a string in even
 * @str: string's pointer
 */

void puts2(char *str)
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
