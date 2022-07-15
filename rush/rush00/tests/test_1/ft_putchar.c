#include <unistd.h>

void	ft_putchar1(char c)
{
	write (1, &c, 1);
}

void	ft_putchar2(char c, char d)
{
	write (1, &c, 1);
	write (1, &d, 1);
}

void	ft_putchar3(char c, char d, char e)
{
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &e, 1);
}
