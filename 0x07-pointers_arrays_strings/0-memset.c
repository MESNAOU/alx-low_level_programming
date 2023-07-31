#include "main.h"

/**
 * _memset -  fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: string to fill
 * @b: character
 *@n: bytes of the memory to fill
 *
 *Return: string's pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

