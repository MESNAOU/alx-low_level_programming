#include "main.h"
#include <stdio.h>

/**
 * _strcmp - coùpare 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: camparaision
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r;

	do {
		r = *(s1 + i) - *(s2 + i);
		i++;
	} while ((r == 0) && ((*(s1 + i) != '\0') || (*(s2 + i) != '\0')));
	return (r);
}
int main(void){
	char amag ='A';
	char amin= 'a';
	char *pmag =&amag;
	char *pmin=&amin;
	int i=_strcmp(pmin,pmag);

	printf("%d\n",i);
}
