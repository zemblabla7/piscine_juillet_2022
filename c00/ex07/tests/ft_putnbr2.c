/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:19:24 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/08 10:19:51 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
	unsigned int i;
	
	i = nb; // on met nb au positif
	
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putchar((nb / 10) + '0');
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		ft_putchar((nb / 10) + '0');
		ft_putchar((nb % 10) + '0');
	}
}

void    ft_putchar(char c)
{
	write (1, &c, 1);
}
