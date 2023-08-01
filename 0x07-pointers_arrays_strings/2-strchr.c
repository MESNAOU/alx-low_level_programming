#include "main.h"

/**
 * _strchr -  first occurrence of c in s
 * @s: string
 * @c: character
 *
 *Return: character's pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char ch = *s;

	while (ch != '\0')
	{
		if (ch == c)
		{
			return (&s[i]);
		}
		i++;
		ch = *(s + i);
	}
	return (0);
}

