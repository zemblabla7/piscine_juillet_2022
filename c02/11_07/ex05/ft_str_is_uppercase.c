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

int ft_str_is_uppercase(char *str)
{
	int	i;
	
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			return 1;
		else if (str[i] == '\0')
			return 1;
		else
			return 0;

	}
}
