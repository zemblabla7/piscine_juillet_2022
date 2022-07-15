#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_putnbr(int nb);

void	ft_int(void)
{
	int a;
	int *pointeur;
	
	pointeur = &a;
	a = 0;
	
	ft_ft(pointeur);
	ft_putnbr(a);
}

void	ft_ft(int *nbr)
{
	*nbr = -42;
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write (1, &c, 1);
}
