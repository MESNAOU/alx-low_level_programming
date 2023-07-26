#include "main.h"
/**
 *void times_table - show times tables
 */
void times_table(void)
{
	int i = 0;
	int j = 1;
	int k;

	while (i <= 9)
	{
		_putchar('0');
		while(j <= 9)
		{
			k = i * j;
			_putchar(',');
			_putchar(' ');
			if((k / 10) == 0)
			{
				_putchar(' ');
			} else
			{
				_putchar(48 + (k / 10));
			}
			_putchar(48 + (k % 10));
			j++;
		}
		i++;
		j = 1;
		_putchar('\n');
	}
}
