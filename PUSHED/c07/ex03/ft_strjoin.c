/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:20:20 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/27 22:52:55 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*string;

	if (size == 0)
		return (NULL);
	i = 0;
	string = malloc(sizeof(char) * ft_strlen(sep));
	while (i < size - 1)
		string = string + ft_strlen(strs[i++]);
	i = 1;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			string[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != (size - 1))
			string[c++] = sep[j++];
		i++;
	}
	string[c] = '\0';
	return (string);
}
