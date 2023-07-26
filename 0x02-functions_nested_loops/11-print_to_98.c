#include <stdio.h>
/**
 * print_to_98 - print numbers till 98
 * @n: the starting point
 */
void print_to_98(int n)
{
	int i=n;

	while(i != 98)
	{
		printf("%d, ",i);
		if(i < 98)
		{
			i++;
		}else
			i--;
	}
	printf("98");
}
