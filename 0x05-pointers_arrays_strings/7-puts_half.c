#include <stdio.h>
#include <unistd.h>

/**
 * puts_half - print half of a string
 * @str: the variable to stock characters
*/

void puts_half(char *str)
{
	int a;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	a = (i / 2);

	if (i % 2 == 0)
	{
		while (str[a] != '\0')
		{
			write(1, &str[a], 1);
			a++;
		}
		write(1, "\n", 1);
	}
	else
	{
		while (str[a - 1] != '\0')
		{
			write(1, &str[a], 1);
			a++;
		}
		write(1, "\n", 1);
	}
}
