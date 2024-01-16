#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all lowercase alphabet letters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
