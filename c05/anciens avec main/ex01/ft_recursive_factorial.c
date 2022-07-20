/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:47:26 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/20 12:04:13 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (0);
	if (nb < 2)
		return (1);
	while (nb > 0)
		return (nb * (ft_recursive_factorial(nb - 1)));
}
#include <stdio.h>

int main () 
{
	printf("%d", ft_recursive_factorial(6));
} 
