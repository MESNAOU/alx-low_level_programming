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
	int i = _strlen(dest);
	int j = _strlen(src);
	int k;

	for (k = 0; k < j; k++)
		*(dest + i + k) = *(src + k);
	*(dest + i + j) = '\0';
	return (dest);
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
