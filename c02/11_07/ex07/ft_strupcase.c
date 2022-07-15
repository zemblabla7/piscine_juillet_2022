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
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	ascii;

	i = 0;
	while (str[i])
	{
		ascii = 97;
		while (str[i] != ascii)
			ascii++;
		str[i] = ascii - 32;
		i++;
	}
	return str;
}
