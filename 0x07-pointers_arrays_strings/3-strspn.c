#include "main.h"

int in(char c, char *a);
/**
 * _strspn - Returns the number of bytes in the initial segment of s which consist only of bytes from accept
 * @s: string
 *
 * @accept: buffer
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char c = *s;
	int k = 0;

	while (c != '\0')
	{
		if (in(c, accept))
		{
			k++;
		} else 
		{
			return (k);
		}
		i++;
		c = *(s + i);
	}
	return (k);
}

/**
 * in - check if it's in
 * @c: character  to check
 * @a: array
 *
 * Return: bool
 */
int in(char c, char *a)
{
	int i = 0;

	for (i = 0; i < 13; i++)
	{
		if (*(a + i) == c)
			return (1);
	}
	return (0);
}

