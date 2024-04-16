#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if c is uppercase or lowercase
 * @c: the character to be checked
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
