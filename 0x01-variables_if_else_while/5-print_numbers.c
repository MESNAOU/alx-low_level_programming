#include <stdio.h>
/**
 * main - print alphabet with putchar
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
