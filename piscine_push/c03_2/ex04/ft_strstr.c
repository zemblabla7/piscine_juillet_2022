/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:54:59 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/17 18:55:02 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		y;
	int		f;
	char	*ptr[100];

	i = 0;
	y = 0;
	f = 0;
	while (str[i])
	{
		if (str[i] == to_find[f])
		{
			ptr[y] = &str[i];
			i++;
			y++;
			f++;
		}
		else
			i++;
	}
	*ptr[y] = '\0';
	if (to_find[f] != '\0' && str[i] == '\0')
		return (NULL);
	else
		return (*ptr);
}
