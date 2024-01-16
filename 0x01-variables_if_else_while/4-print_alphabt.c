#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Writes the alphabet excluding the letters 'e' and 'q'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n == 'e' || n == 'q')
		{
			n++;
			continue;
		}

		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
