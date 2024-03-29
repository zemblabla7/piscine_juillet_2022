/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:40:01 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/26 13:40:04 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_nbr(char c, char *base)
{
	int	i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	negative;
	unsigned int	nb;

	i = 0;
	nb = 0;
	negative = 0;
	if (is_error1(base) == 0 || is_error2(base) == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] && ft_nbr(str[i], base) < ft_strlen(base))
	{
		nb = nb * ft_strlen(base) + ft_nbr(str[i], base);
		i++;
	}
	if (negative % 2 != 0)
		nb = nb * (-1);
	return (nb);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    
    return (//);
}