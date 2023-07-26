/**
 * _isalpha - chech if is alphabet
 *@c: char to test
 *
 * Return: 1(true) or 0(false)
 */
int _isalpha(int c)
{
	if ((('a' <= c) && (c <= 'z')) || (('A' <= c) && (c <= 'Z')))
	{
		return (1);
	} else
		return (0);
}
