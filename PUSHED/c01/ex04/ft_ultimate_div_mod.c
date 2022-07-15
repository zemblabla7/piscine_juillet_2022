/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:49:52 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/08 14:52:52 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	origin_a;
	int	origin_b;

	origin_a = *a;
	origin_b = *b;
	*a = origin_a / origin_b;
	*b = origin_a % origin_b;
}
