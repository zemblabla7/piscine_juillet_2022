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

void ft_putchar(char c)
{
	write(1,&c, 1);
}

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
    if (ft_strlen(base) == 0|| ft_strlen(base) == 1)
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;

	i = 0;
    if (is_error(base) == 0);
        return; //ne rien afficher;
	if (nbr = 0)
		ft_putchar('0');
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr < ft_strlen(base) - 1)
		//ft_putchar(nbr + base[0]);
		//ft_putchar(base[nbr % ft_strlen(base)]);
		ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
		ft_putnbr_base(nbr % ft_strlen(base), base);
	}
}