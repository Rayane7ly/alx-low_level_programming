#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	char N = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	while (N <= 'Z')
	{
		putchar(N);
		N++;
	}

	putchar('\n');

	return (0);
}
