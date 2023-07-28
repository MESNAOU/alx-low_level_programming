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
	int i = _strlen(dest);
	int j = _strlen(src);
	char d[i + j + 1];
	int k;

	for (k = 0; k < i; k++)
		*(d + k) = *(dest + k);
	for (k = 0; k < j; k++)
		*(d + i + k) = *(dest + k);
	*(d + i + j) = '\n';
	return (d);
}
/**
 * _strlen - cal a string's length
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
        int i = 0;
        char c = *s;

        while (c != '\0')
        {
                i++;
                c = *(s + i);
        }
        return (i);
}
