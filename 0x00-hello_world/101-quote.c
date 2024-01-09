#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	char *ptr = str;
	while(*ptr != '\0')
{
		ft_putchar(*ptr);
		ptr++;
}
}

int main()
{
	ft_putstr("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return 1;
}
