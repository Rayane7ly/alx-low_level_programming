#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts - functions to print
 *
 * @str: variable pointer which contains the writting
*/
void _puts(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	write(1, ptr, 1);
	ptr++;
	}
	write(1, "\n", 1);
}
