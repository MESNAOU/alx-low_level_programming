#include "main.h"

/**
 * _memcpy -  fills n bytes of memory area pointed to by dest with src
 * @dest: destination
 * @src: source
 *@n: bytes of the memory to fill
 *
 *Return: string's pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

