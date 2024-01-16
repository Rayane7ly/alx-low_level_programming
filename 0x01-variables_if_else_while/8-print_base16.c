#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Writes numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	char N = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (N <= 'f')
	{
		putchar(N);
		N++;
	}

	putchar('\n');

	return (0);
}
