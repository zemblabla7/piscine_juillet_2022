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

// NE MARCHE PAS

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int     i;
    int     c;

    i = min;
    c = 0;
    range = malloc(sizeof(int) * (max - min));
    if (!(range = malloc(sizeof(int) * (max - min))))
        return (-1);
    if (min >= max)
    {
        //range = NULL; // ?
        return (0);
    }
    while (i < max)
    {
        *range[c] = i;
        i++;
        c++;
    }
    return (max - min);
    free (range);
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