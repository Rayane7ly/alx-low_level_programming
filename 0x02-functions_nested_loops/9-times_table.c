#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example table:
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 */
void times_table(void)
{
	/* Variables for multiplication */
	int num, mult, prod;

	/* Loop through each row */
	for (num = 0; num <= 9; num++)
	{
		/* Print the first digit before the loop */
		_putchar('0');

		/* Loop through each column */
		for (mult = 1; mult <= 9; mult++)
		{
			/* Print comma and space between numbers */
			_putchar(',');
			_putchar(' ');

			/* Calculate product */
			prod = num * mult;

			/* Put space if the product is a single-digit number */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0'); /* Get the first digit */

			_putchar((prod % 10) + '0'); /* Get the second digit */
		}
		_putchar('\n'); /* Move to the next line for the next row */
	}
}
