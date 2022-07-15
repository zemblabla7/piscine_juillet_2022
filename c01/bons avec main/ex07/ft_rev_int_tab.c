/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:56:06 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/10 20:33:48 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	char	origin;
	int		i;

	i = 0;
	origin = 0;
	while (i < size)
	{
		origin = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = origin;
		size--;
		i++;
	}
}
