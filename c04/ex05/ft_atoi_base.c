/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:18:57 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/20 15:01:06 by casomarr         ###   ########.fr       */
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
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return 0;
	while (base[i])
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return 0;
		if (base[i] == '+' || base[i] == '-')
			return 0;
		if (base[i] == base[i + 1])
			return 0;
		else
			return 1;
		i++;
	}
	return 0;
}

int ft_nbr(char c, char *base)
{
	int     i;
	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int ft_atoi_base(char *str, char *base)
{
	int     i;
	int     nb;
	int     negative;

	i = 0;
	nb = 0;
	negative = 0;
	if (is_error(base) == 0)
			return 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) 
			i++;
	while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				negative++;
			i++;
		}
	while (str[i] && i > ft_strlen(base))
	//while (ft_nbr(str[i]))
		{
			nb = nb * ft_strlen(base) + (ft_nbr(str[i], base));
			//nb = nb * ft_strlen(base) + str[i] - base[0];
			i++;
		}
	if (negative % 2 != 0)
		nb = nb * (-1);
	return (nb);
}
