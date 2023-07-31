#include "main.h"

/**
 * _strcmp - coùpare 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: camparaision
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r;

	do
	{
		r = *(s1 + i) - *(s2 + i);
	} while (r == 0)
	{
		i++;
	}
	return (r);
}
