/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:30:39 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/07 11:05:34 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void	ft_afficher(int d, int e, int f);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	

a = '0';
while (a <= '7')
	{
	b = a + 1;
	while (b <= '8')
		{
		c = b + 1;
		while (c <= '9')
			{  
			ft_afficher(a, b, c);
			c++;  
			}
		b++;
		}
	a++;
	}
}

void	ft_afficher(int d, int e, int f)
{
	write(1,&d,1);
	write(1,&e,1);
	write(1,&f,1);
	if (d == '7' && e == '8' && f == '9')
		{
		write(1,".",2);
		}
	else
		{
		write(1,", ",1);
		}
	
}

