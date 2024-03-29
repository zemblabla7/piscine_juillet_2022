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

int	*ft__ultimate_range(int **range,int min, int max)
{
    int	i;
	int	len;

	i = 0;
	len = max - min;
	if (len < 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * len);
	if (!range)
		return (-1);
    i = min;
	while (i < max)
	{
		(*range)[i] = i;
		i++;
	}
	return (len);
}

#include <stdio.h>

int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	
	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	
	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}
