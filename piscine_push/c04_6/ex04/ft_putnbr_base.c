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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_error1(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	is_error2(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (is_error1(base) == 1 && is_error2(base) == 1)
	{
		if (nbr == 0)
			ft_putchar(base[nbr]);
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		if (nbr < ft_strlen(base) && nbr > 0)
			ft_putchar(base[nbr]);
		if (nbr > ft_strlen(base))
		{
			ft_putnbr_base(nbr / ft_strlen(base), base);
			ft_putchar(base[nbr % ft_strlen(base)]);
		}
	}
}
