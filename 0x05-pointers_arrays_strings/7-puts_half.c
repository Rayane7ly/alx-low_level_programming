#include <stdio.h>

/**
 * puts_half - print half of a string
 * @str: the variable to stock characters
*/

void puts_half(char *str)
{
	int i = 0;
	int a;
	int l, n;

	while (str[i] != '\0')
		i++;
	l = i;

	a = i / 2;

	if (i % 2 == 0)
	{
		i = 0;

		while (str[i] != '\0')
		{
			putchar(str[i + a]);
			i++;
		}
		putchar('\n');
	}

	else
	{
		n = (l - 1) / 2;
		for (i = l - n ; i < l ; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
}
