#include <unistd.h>

/**
 * ft_putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: void
 */
void ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * ft_putstr - Writes a string to the standard output
 * @str: The string to be written
 *
 * Return: void
 */
void ft_putstr(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		ft_putchar(*ptr);
		ptr++;
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (failure)
 */
int main(void)
{
	ft_putstr("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
