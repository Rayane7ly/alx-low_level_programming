#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Writes all digit numbers starting from 0 using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
