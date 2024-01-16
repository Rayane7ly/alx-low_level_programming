#include "main.h"

/**
 * print_alphabet - Utilizes the _putchar function to print
 *                  the alphabet from 'a' to 'z'.
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
