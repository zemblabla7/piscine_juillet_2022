/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:36:28 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/11 15:37:05 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] < 32 || str[i] == 127)
		{
			ft_hex(i);
			str[i] = str[h];
			i++;
		else
			i++;
	}
	return str;
}


int	ft_hex(*i)
{		
	int 		a;
	int		b;
	char	base[] = "0123456789abcdef";
	
	a = i / 16;
	b = i % 16;
	h = base[a] + base[b]; // mais pas + dans le sens calculer, les deux caracteres sont a cote
	
	return h;
}

//mathieu : char va de -128 a 128 et 128 = -128
