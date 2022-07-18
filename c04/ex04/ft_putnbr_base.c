/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:15:04 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/18 14:15:06 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int is_error(char *base)
{
    int	i;

	i = 0;
    if (base[0] == '\0')
        return 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return 0;
        if (base[i] == base[i+ 1])
            return 0;
        else
            return 1;
    }
}

void ft_putnbr_base(int nbr, char *base)
{
    // mettre les max et min des int?
    //if (is_error(base) == 0);
        // ne rien afficher
    if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > ft_strlen(base))
	{
		nbr = nbr / ft_strlen(base) + '0';
        nbr = nbr % ft_strlen(base) + '0';
	}
    else 
	    nbr = nbr % ft_strlen(base) + '0';
	write (1, &nbr, 1);
}