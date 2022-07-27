/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:41:15 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/26 13:41:18 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char	*ft_strcpy(char *src)
{
	int     i;
    char    *copy;

	i = 0;
	copy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
void	ft_putstr(char *str) // A EFFACER
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c) // A EFFACER
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb) // A EFFACER
{
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		nbr = nb * -1;
		ft_putchar('-');
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void	ft_print(struct s_stock_str *param) // A EFFACER
{
	int	i;

	i = 0;
	while (param[i].str)
	{
		ft_putstr(param[i].str);
		ft_putstr("\n");
		ft_putnbr(param[i].size);
		ft_putstr("\n");
		ft_putstr(param[i].copy);
		ft_putstr("\n");
		i++;
	}
}
*/

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str     *tab;
    int     i;

    tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
    i = 0;
    while (i < ac)
    {
        tab[i].size = ft_strlen(av[i]);
        tab[i].str = av[i];
        tab[i].copy = ft_strcpy(av[i]);
        i++;
    }
    tab[i].str = 0;
    return (tab);
	free(tab);
}

/*
int main (int argc, char **argv) // A EFFACER
{
    ft_print(ft_strs_to_tab(argc, argv));
    return (0);
} */

/*
int main ()
{
	char **argv;
	*argv[8] = "carolina";
	ft_print(ft_strs_to_tab(2, argv));
	return 0;
} */ // IMPORTANT DE COMPRENDRE POURQUOI CA MARCHE PAS POUR POUVOIR UTILISER GDB