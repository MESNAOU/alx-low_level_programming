#include "main.h"
/**
 * _strcat - cancate 2 strings
 * @dest: destination's pointer
 * @src: source's pointer
 *
 * Return: destination's pointer
 */

char *_strcat(char *dest, char *src)
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
	while (c != '\0')
	{
		*(dest + i + k) = *(src + i);
		i++;
		c = *(src + i);
	}
	*(dest + i + k) = '\0';
	return (dest);
}

