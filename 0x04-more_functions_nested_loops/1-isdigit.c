#include "main.h"

/**
 * _isdigit - chech if it's a digit
 * @c: checked character
 *
 * Return: a boolean
 */
int _isdigit(int c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	else
		return (1);
}
