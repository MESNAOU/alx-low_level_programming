#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of an int
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int r;
	r=n%10;
	printf("Last digit of %d is %d ", n, r);
	if (r > 5)
	{
		printf("and is greater than 5\n");
	}else if (r == 0)
	{
		printf("and is 0\n");
	}else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
