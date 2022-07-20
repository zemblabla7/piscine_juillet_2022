/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:03:17 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/20 12:10:45 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 2)
		return (nb * (ft_recursive_power(nb, (power -1))));
}
#include <stdio.h>

int main () 
{
	printf("%d", ft_recursive_power(3, 4));
} 
