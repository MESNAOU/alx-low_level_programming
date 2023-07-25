/**
 * _islower - chech if is lower
 *@c: char to test the case
 *
 * Return: 1(true) or 0(false)
 */
int _islower(int c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	} else
		return (1);
}
