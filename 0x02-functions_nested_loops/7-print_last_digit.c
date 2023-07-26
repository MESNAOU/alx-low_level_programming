/**
 * print_last_digit - get unity number
 *@n: char to test
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	r=n % 10;
	putchar(r);
	return (r);
}
