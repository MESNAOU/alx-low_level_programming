#include "main.h"

int separ(char c, char *a);
/**
 * *leet - chaging some characters to numbers.
 * @s: string
 *
 * Return: string
 */
char *leet(char *s)
{
	char exc[] = "a4A4e3E3o0O0t7T7l1L1";
	int i = 0;
	char c = *s;
	int k;

	while (c != '\0')
	{
		for (k = 0; k < 10; k +=2)
		{
			if (*(exc + k) == c)
				*(s + i) = *(exc + k + 1);
		}
		i++;
		c = *(s + i);
	}
	return (s);
}

