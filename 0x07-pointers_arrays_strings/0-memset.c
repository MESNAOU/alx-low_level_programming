#include "main.h"

/**
 * _memset -  fills the n bytes of memory area pointed to by s with b
 * @s: string to fill
 * @b: character
 *@n: bytes of the memory to fill
 *
 *Return: string's pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

