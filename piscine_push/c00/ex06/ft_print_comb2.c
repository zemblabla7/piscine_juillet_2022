/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2Copy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:49:04 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/07 15:25:52 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_afficher(int num1, int num2);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_afficher(a, b);
			b++;
		}
		a++;
	}
}

void	ft_afficher(int num1, int num2)
{
	ft_putchar((num1 / 10) + '0');
	ft_putchar((num1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((num2 / 10) + '0');
	ft_putchar((num2 % 10) + '0');
	if (num1 < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
