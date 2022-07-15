/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:54:49 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/11 12:56:38 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		i;
	int		y;
	int		f;
	char	tab_min[26];
	char	tab_maj[26];
	
	i = 97;
	n = 0;
	y = 0;
	f = 0;
	while (i < 122)
	{
		tab_min[y] = i;
		i++;
		y++;
	}
	i = 65;
	y = 0;
	while (i < 90)
	{
		tab_maj[y] = i;
		i++;
		y++;
	}
	i = 0;
	y = 0;
	while (str[i])
	{
		while (str[i] != tab_min[y])
			y++;
		str[f] = tab_maj[y];
		i++;
		f++;
	}
	return str;
}



