#include "main.h"
#include <stdio.h>
int len(char *s);
int chock(char *s, int l, int i);
/**
 * is_palindrome - check if it's a palindrome
 * @s: string
 *
 * Return: boolean
 */
int is_palindrome(char *s)
{
	if (len(s) == 0)
		return (1);
	return (chock(s, len(s), 0));
}
/**
 * chock - check the equality of the iemes char of a string
 * @s: string
 * @l: length
 * @i: ieme char
 *
 * Return: bool
 */
int chock(char *s, int l, int i)
{
	if (s[i] != s[l - 1 - i])
		return (0);
	else if (i < l / 2)
		return (chock(s, l, i + 1));
	return (1);
}
/**
 * len - get the string's length
 * @s: string
 *
 * Return: length
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}
