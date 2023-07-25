/**
 * _islower - chech if is lower
 *
 * Return: 1(true) or 0(false)
 */
int _islower(int c)
{
	if(c < 'a' || c > 'z')
	{
		return (0);
	}else
		return (1);
}
