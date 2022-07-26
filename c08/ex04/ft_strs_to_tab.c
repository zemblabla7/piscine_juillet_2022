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

int     ft_strlen(char *av)
{
    int i;
    
    i = 0;
    while (av[i])
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
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str     *tab;
    int     i;

    tab = malloc(sizeof(t_stock_str) * (ac + 1));
    if (tab == NULL)
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
    ft_print(tab);
    free(tab);
}

void				ft_print(struct s_stock_str *param)
{
	int	i;

	i = 0;
	while (param[i].str)
	{
		ft_putstr(param[i].str); // j ai ni putrt ni putnbr mais plus de place trop de fonctions
		ft_putstr("\n");
		ft_putnbr(param[i].size);
		ft_putstr("\n");
		ft_putstr(param[i].copy);
		ft_putstr("\n");
		i++;
	}
}

int main (int argc, char **argv) // A EFFACER
{
    int i;
    
    i = 1;
    while (i < argc)
    {
        ft_strs_to_tab(argc, argv[i]);
        i++;
    }
    return (0);
}