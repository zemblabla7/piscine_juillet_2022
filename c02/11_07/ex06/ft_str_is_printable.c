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

int ft_str_is_printable(char *str);
{
	int	i;
	
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			return 1;
		else if (str[i] == '\0')
			return 1;
		else
			return 0;

	}
}
