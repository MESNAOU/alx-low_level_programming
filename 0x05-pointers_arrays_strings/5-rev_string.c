#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - prints a string
 * @s: string's pointer
 */

void rev_string(char *s)
{
	int end = _strlen(s) - 1;
	int start = 0;
	char c;

	while (start < end)
	{
		c = *(s + end);
		*(s + end) = *(s + start);
		*(s + start) = c;
		end--;
		start++;
	}
}
