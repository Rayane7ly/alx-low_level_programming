#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
*/
void print_numbers(void)
{
	int i;

	for (i = 48 ; i <= 58 ; i++)
	{
		if (i != 58)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
