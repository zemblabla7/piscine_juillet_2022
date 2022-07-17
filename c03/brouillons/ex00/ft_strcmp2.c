/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:10:12 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/13 16:10:15 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// A EFFACER
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int weight_s1;
    int weight_s2;

    i = 0;
    weight_s1 = 0;
    while (s1[i])
    {
        weight_s1 = s1[i]; //FAUX
        i++;
    }
    i = 0;
    weight_s2 = 0;
    while (s2[i])
    {
        weight_s2 = s2[i]; // FAUX
        i++;
    }

     // A EFFACER
    printf("%d\n", weight_s1);
    printf("%d\n", weight_s2);

    if (weight_s1 < weight_s2)
        return (-1);
    if (weight_s1 == weight_s2)
        return (0);
    if (weight_s1 > weight_s2)
        return (1);
}