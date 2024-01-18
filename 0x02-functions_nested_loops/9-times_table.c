#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example table:
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
    int num, mult, prod;

    for (num = 0; num <= 9; num++)
    {
        _putchar('0'); /* Print the first digit before the loop*/

        for (mult = 1; mult <= 9; mult++)
        {
            _putchar(',');
            _putchar(' ');

            prod = num * mult;

            /* Put space if the product is a single digit number*/
            if (prod <= 9)
                _putchar(' ');
            else
                _putchar((prod / 10) + '0'); /* Get the first digit*/

            _putchar((prod % 10) + '0'); /* Get the second digit*/
        }
        _putchar('\n');
    }
}
