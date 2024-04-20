#include <stdio.h>
#include "main.h"

/**
 * print_triangle - printing triangle with #
 *
 * @size: variable for the size of triangle
*/
void print_triangle(int size)
{
	int j;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				if ((i + j) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
