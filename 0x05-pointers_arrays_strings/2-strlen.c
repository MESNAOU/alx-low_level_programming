#include "main.h"

/**
 * _strlen - cal a string's length
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;
	char c = *s;

	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}
	return (i);
}
