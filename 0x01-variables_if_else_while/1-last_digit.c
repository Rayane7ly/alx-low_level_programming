#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 * Generates a random number and prints information about its last digit.
 * Last digit is greater than 5, is 0, or is less than 6 and not 0.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	}

	return (0);
}
