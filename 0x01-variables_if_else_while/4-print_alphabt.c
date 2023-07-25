#include <stdio.h>
/**
 * main - print alphabet with putchar
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		} else
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
