/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:00:36 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/10 20:00:40 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	char	origin;

	i = 0;
	origin = 0;
	while (i < size)
	{
		y = i + 1;
		while (y < size)
		{
			if (tab[i] > tab[y])
			{
				origin = tab[i];
				tab[i] = tab[y];
				tab[y] = origin;
			}
			y++;
		}
		i++;
	}
}
