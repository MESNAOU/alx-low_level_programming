#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: pointing the destination 
 * @src: pointing the source
 *
 * Return: destination's pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char c = *(src + i);

	while (c != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
		c = *(src + i);
	}
	*(dest + i) = '\0';
	return dest;
}

