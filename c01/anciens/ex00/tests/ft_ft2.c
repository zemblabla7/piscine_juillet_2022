#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_afficher(int num);
void	ft_putchar(char c);

void ft_int(void)
{
	int a;
	int *pointeur;
	//char [] = 
	
	pointeur = &a;
	a = 0;
	
	ft_ft(pointeur);
	ft_afficher(a);
}

void ft_ft(int *nbr)
{
	*nbr = -42;
}

void	ft_afficher(int num)
{
	ft_putchar((num / 10) + '0');
	ft_putchar((num % 10) + '0');
}

void	ft_putchar(char c) 
{
	write (1, &c, 1);
}
