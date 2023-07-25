#include <stdio.h>

/**
 * main - print a string with puthchar
 * Return: 0
 */
int main(void)
{
	char t[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar(t[i]);
	}
	putchar('\n');
	return (0);
}
