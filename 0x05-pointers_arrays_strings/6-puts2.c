#include <stdio.h>
#include <unistd.h>

/**
 * puts2 - print every other character of the string
 * @str: variable to store characters
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i = i + 2;
	}
	putchar('\n');
}
