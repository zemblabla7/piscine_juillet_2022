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


void	ft_afficher(int i);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	
		a = '0';
		while (a <= '7')
		{
		ft_afficher(a);

			b = a + 1;
			while (b <= '8')
		   	{
		        	ft_afficher(b);
		        	
				   c = b + 1;
				   while (c <= '9')
				   {  
				      ft_afficher(c);
				      c++;   
				   }
			 b++;
			 }
		a++;
		}
}

void	ft_afficher(int i)
{
	write(1,&i,1);
	write(1," ",1);
}
	
