#include "main.h"

int separ(char c, char *a);
/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	char sep[13] = {' ',
		'\t',
		'\n',
		',',
		';',
		'.',
		'!',
		'?',
		'"',
		'(',
		')',
		'{',
		'}'};
	int i = 0;
	char c = *s;

	while (c != '\0')
	{
		if (i == 0)
			if (*s <= 'z' && *s >= 'a')
				*s = *s - 32;
		if (separ(c, sep))
		{
			if (*(s + i + 1) <= 'z' && *(s + i + 1) >= 'a')
				*(s + i + 1) = *(s + i + 1) - 32;
		}
		i++;
		c = *(s + i);
	}
	return (s);
}

/**
 * separ - check if it's a separator
 * @c: character  to check
 * @a: separetor's array
 *
 * Return: bool
 */
int separ(char c, char *a)
{
	int i = 0;

	for (i = 0; i < 13; i++)
	{
		if (*(a + i) == c)
			return (1);
	}
	return (0);
}

