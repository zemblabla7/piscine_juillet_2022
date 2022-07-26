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
    t_stock_str     *param;
    int     i;

    output = malloc(sizeof(t_stock_str) * (ac + 1));
    while (i < ac)
    {
        param[i].size = ft_strlen(av[i]);
        param[i].str = av[i];
        param[i].copy = ft_strcpy(av[i]);
    }
    free(output);
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