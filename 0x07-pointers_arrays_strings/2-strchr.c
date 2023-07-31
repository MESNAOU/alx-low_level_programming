#include "main.h"

/**
 * _strchr -  Returns a pointer to the first occurrence of the character c in the string s
 * @s: string
 * @b: character
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
	return ('\0');
}

