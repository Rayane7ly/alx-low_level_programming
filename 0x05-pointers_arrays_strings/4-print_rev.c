#include <stdio.h>

/**
 * print_rev - print characters in reverse
 *
 * @s: variable to store characters
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
