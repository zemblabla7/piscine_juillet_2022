/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:27:27 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/21 19:27:29 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buffer;
	int	length;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = max - min;
	buffer = malloc(length * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < length)
	{
		buffer[i] = min + i;
		i++;
	}
	return (length);
}
