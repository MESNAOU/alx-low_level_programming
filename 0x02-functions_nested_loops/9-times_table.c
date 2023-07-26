#include "main.h"
/**
 *void times_table - show times tables
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while(j <= 9)
		{
			_putchar(48 + (i * j));
			if(j != 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
			}
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
