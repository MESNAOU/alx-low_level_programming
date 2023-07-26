/**
 * print_sign - chech the sign pf a number
 *@n: char to test
 *
 * Return: 1(n>0) or 0(n =0) or -1(n<0)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else
	{
		_putchar(43);
		return (1);
	}
}
