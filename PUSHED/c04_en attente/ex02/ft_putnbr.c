/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:19:24 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/23 15:58:03 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    unsigned int    nbr;

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

#include <stdio.h>

int		main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
}

