#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i = 0;
	char c = *s;

	while (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
			*(s + i) = (*(s + i) - 32);
		i++;
		c = *(s + i);
	}
	return (s);
}
