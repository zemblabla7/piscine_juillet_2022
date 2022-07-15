/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:35:13 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/11 12:35:16 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
 {
               int	i;
               
               i = 0;
		while (i < n) // ou <= ?
		{
			dest[i] = src[i];
			i++;
		}
		if (i < n)
		{
			dest[i] = '\0';
			i++;
		}
               return dest;
 }

