/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:49:04 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/07 15:25:52 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_afficher(int e, int f, int g, int h);

void ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	if ((a && b) != (c && d))
	{
		a = '0';
		while (a <= '9')
		{
			b = '0';
				while (b <= '9')
				{
					c = '0';
					       while (c <= '9')
					       {
							d = '1';
								while (d <= '9')
								{
									ft_afficher(a, b, c, d);
									d++;
								}
							c++;
					       }	    
					b++;   
				}
			a++;
		}
	}
}

void	ft_afficher(int e, int f, int g, int h)
{
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, " ", 1);
	write(1, &g, 1);
	write(1, &h, 1);
	if (e == '9' && f == '8' && g == '9' && h == '9')
	{
		write(1, ".", 1);
	}
	else
	{
		write(1, ", ", 1);
	}
}
