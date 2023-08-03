#include "main.h"

/**
 * _puts_recursion -  fills the n bytes of memory area pointed to by s with b
 * @s: string to fill
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(s + 1);
}

