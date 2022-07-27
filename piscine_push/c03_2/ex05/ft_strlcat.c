/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:58:02 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/17 18:58:05 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[y])
		y++;
	while (y < size)
	{
		dest[y] = src[i];
		i++;
		y++;
	}
	dest[size] = '\0';
	return (y);
}
