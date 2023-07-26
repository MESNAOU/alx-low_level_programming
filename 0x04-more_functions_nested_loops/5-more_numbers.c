#include "main.h"
/**
 * more_numbers - duplicate 10 times numbers
 */
void more_numbers(void)
{
	char x;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			_putchar(x);
		}
		for (x = '0';x <= '4'; x++)
		{
			_putchar('1');
			_putchar(x);
		}
		putchar('\n');
	}
}
