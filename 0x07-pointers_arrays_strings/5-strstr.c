#include "main.h"

int in(char *s, int i, char *sub);
/**
 * _strstr - if a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: substring's pointer in s
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char c = *haystack;

	while (c != '\0')
	{
		if (in(haystack, i, needle))
		{
			return (&haystack[i]);
		}
		i++;
		c = *(haystack + i);
	}
	return ('\0');
}

/**
 * in - check if it's in
 * @s: string
 * @i: rang
 * @sub: substring
 *
 * Return: bool
 */
int in(char *s, int i, char *sub)
{
	int k = 0;
	char ch_sub = *sub;
	char ch_s = *(s + i);

	while (ch_sub != '\0' && ch_s != '\0')
	{
		if (ch_sub - ch_s != 0)
			return (0);
		k++;
		ch_sub = *(sub + k);
		ch_s = *(s + i + k);
	}
	return (1);
}
