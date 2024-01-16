#include "main.h"

/**
 * print_alphabet_x10 - Utilize the function _putchar to print the alphabet
 *                      10 times.
 */
void print_alphabet_x10(void)
{
	int n, i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
