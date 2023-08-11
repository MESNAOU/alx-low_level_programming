#include "main.h"

int nextstar(char *s);
int findar(int n, char *s2, int i2, char *ps, int i1, int *ppas);
/**
 * wildcmp - check if 2 strings are equal
 * @s1: string 1
 * @s2: string 2
 *
 * Return: boolean
 */
int wildcmp(char *s1, char *s2)
{
	int n;
	int f;
	int pas;
	int *ppas;

	ppas = &pas;
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		n = nextstar(s2);
		f = findar(n, s2, 1, s1, 0, ppas);
		if (f == 0)
			return (0);
		else
			return (wildcmp(s1 + pas, s2 + 1));
	} else if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}

/**
 * nextstar - how many steps to move to reach the next *
 * @s: crossed string
 *
 * Return: step's number
 */
int nextstar(char *s)
{
	if (*(s + 1) != '*')
	{
		if (*(s + 1) == '\0')
		{
			return (1);
		}
		return (1 + nextstar(s + 1));
	}
	return (0);
}

/**
 * findar - check if n chars from s2 are in ps
 * @n: number of chars to check
 * @s2: string
 * @i2: s2's cursur
 * @ps: string
 * @i1: ps's cursur
 * @ppas: where ps reach
 *
 * Return: bool if it's found or not
 */
int findar(int n, char *s2, int i2, char *ps, int i1, int *ppas)
{
	if (i2 <= n)
	{
		if (*(ps + i1) == *(s2 + i2))
		{
			return (findar(n, s2, i2 + 1, ps, i1 + 1, ppas));
		}
		if (*(ps + i1) == '\0')
		{
			*ppas = i1 - n;
			return (0);
		}
		return (findar(n, s2, 1, ps, i1 - i2 + 2, ppas));
	}
	*ppas = i1 - n;
	return (1);
}

