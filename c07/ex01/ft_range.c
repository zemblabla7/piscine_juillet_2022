/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:27:02 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/21 19:27:04 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ft_range(int min, int max)
{
    int     *tab;
    int     i;
    int     c;

    i = min;
    c = 0;
    tab = malloc(sizeof(int) * (max - min));
    if (min >= max)
        return (NULL); // c est un pointeur??
    while (i < max)
    {
        tab[c] = i;
        i++;
        c++;
    }
    return (tab);
    free (tab);
}