#include "main.h"

int in(char c, char *a);
/**
 * _strspn - number of firt bytes in s which consist only of bytes from accept
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
	char a_c = *a;

	while (a_c != '\0')
	{
		if (a_c == c)
			return (1);
		i++;
		a_c = *(a + i);
	}
	return (0);
}
