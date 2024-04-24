#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - reset the value of a pointer to 98
 *
 * @n: variable which is a pointer
*/
void reset_to_98(int *n)
{
	int p = 98;
	*n = p;
}
