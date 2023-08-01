#include "main.h"

int in(char c, char *a);
/**
 * _strpbrk - if bytes in s are from accept
 * @s: string
 * @accept: buffer
 *
 * Return: character's pointer in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	char c = *s;

	while (c != '\0')
	{
		if (in(c, accept))
		{
			return (&s[i]);
		}
		i++;
		c = *(s + i);
	}
	return ('\0');
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
