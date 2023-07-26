#include "main.h"
/**
 *jack_bauer - modilaze a clock
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar(48 + (i / 10));
			_putchar(48 + (i % 10));
			_putchar(':');
			_putchar(48 + (j / 10));
			_putchar(48 + (j % 10));
			_putchar('\n');
		}
	}
}
