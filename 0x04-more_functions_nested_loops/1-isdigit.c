#include "main.h"

/**
 * _isupper - chech for uppercase
 * @c: checked character
 *
 * Return: a boolean
 */
int _isupper(int c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	else
		return (1);
}
