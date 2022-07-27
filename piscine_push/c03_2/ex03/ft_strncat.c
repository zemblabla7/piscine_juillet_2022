/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:50:53 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/17 18:50:55 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	l_dest;
	unsigned int	i;

	l_dest = 0;
	i = 0;
	while (dest[l_dest])
		l_dest++;
	while (i < nb)
	{
		dest[l_dest] = src[i];
		l_dest++;
		i++;
	}
	while (l_dest < nb)
		dest[l_dest] = '\0';
	return (dest);
}
