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
	int fin = (*(dest) == '\0');

	while ((c != '\0') && (i < n))
	{
		*(dest + i) = c;
		i++;
		c = *(src + i);
		if (!fin)
			fin = (*(dest + i) == '\0');
	}
	if (fin && (c == '\0'))
		*(dest + i) = '\0';
	return (dest);
}
