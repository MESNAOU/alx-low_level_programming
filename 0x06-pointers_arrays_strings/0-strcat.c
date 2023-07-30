#include <stdio.h>
#include "main.h"
int _strlen(char *s);
/**
 * _strcat - cancate 2 strings
 * @dest: destination's pointer
 * @src: source's pointer
 *
 * Return: destination's pointer
 */

char *_strcat(char *dest, char *src)
{
	int k = 0;
	int i = 0;
	char c = *(dest + k);

	while (c != '\0')
	{
		k++;
		c = *(dest + k);
	}
	c = *(src + i);
	while (c != '\0')
	{
		*(dest + i + k) = *(src + i);
		i++;
		c = *(src + i);
	}
	*(dest + i + k) = '\0';
	return (dest);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
