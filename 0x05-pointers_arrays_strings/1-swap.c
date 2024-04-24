#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the value of two integers
 *
 * @a: variable to be swapped
 * @b: variable to be swapped
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
