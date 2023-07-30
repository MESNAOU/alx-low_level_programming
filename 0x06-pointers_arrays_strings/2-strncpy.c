#include "main.h"
/**
 * _strncpy - copy n strings
 * @dest: destination's pointer
 * @src: source's pointer
 * @n: number of char to copy
 *
 * Return: destination's pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char c = *(src + i);

	while ((c != '\0') && (i < n))
	{
		*(dest + i) = c;
		i++;
		c = *(src + i);
	}
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
