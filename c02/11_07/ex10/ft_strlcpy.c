/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:43:14 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/11 17:43:17 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
               
               i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		/*if (i > size)
		{
			
		}*/
               return dest;
}
