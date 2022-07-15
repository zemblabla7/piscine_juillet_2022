/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:28:44 by bbresil           #+#    #+#             */
/*   Updated: 2022/07/10 17:28:53 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar1(char c)
{
	write(1, &c, 1);
}

void	ft_putchar2(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_putchar3(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}
