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

char *ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
			while (str[i] >= 97 && str[i] <= 122)
			i++;
		}
		else
			i++;
	}
	return str;
}

\\ quand un mot commence par un numero il ne faut alors pas avoir de majuscule a la premiere lettre rencontree dans le mot!!
