#include "main.h"
/**
 * _strncat - cancate 2 strings
 * @dest: destination's pointer
 * @src: source's pointer
 * @n: number of char to cancate
 *
 * Return: destination's pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int k = 0;
	int i = 0;
	char c = *(dest + k);

	while (c != '\0')
	{
		k++;
		c = *(dest + k);
	}
	c = *(src + i);
	while ((c != '\0') && (i < n))
	{
		*(dest + i + k) = *(src + i);
		i++;
		c = *(src + i);
	}
	*(dest + i + k) = '\0';
	return (dest);
}

