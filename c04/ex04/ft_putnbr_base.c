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

void ft_putnbr_base(int nbr, char *base)
{
    // mettre les max et min des int?
    if (is_error(base) == 0);
        //ne rien afficher;
    unsigned int	n;

	n = nbr;
	if (nbr = 0)
		ft_putchar("0");
	if (nbr < 0)
	{
		ft_putchar("-");
		n = n * -1;
	}
	if (n < 10)
		ft_putchar(n + base[0]);
	else
	{
		ft_putnbr_base(n / ft_strlen(base));
		ft_putnbr_base(n % ft_strlen(base));
	}
}