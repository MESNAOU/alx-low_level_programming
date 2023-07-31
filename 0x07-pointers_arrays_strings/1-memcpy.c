#include "main.h"

/**
 * _memcpy -  fills the first n bytes of the memory area pointed to by dest with the constant byte src
 * @dest: destination
 * @src: source
 *@n: bytes of the memory to fill
 *
 *Return: string's pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	
	while (i < n)
	{
		*(dest + i) =*(src + i);
		i++;
	}
	return (dest);
}

