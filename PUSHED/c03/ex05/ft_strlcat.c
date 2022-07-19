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
	unsigned int	j;
	unsigned int	l_src;

	i = 0;
	j = 0;
	l_src = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	l_src = j;
	if (size == 0 || i > size)
		return (size + j);
	if (src[0] == '\0')
		return (i);
	j = 0;
	while (src[j] && (i + j < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + l_src);
}
