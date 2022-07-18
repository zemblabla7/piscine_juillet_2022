/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:57:19 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/18 11:57:21 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_atoi.c"

int main()
{
    char string1[100] = "105";
    char string2[100] = "  106";
    char string3[100] = " --+++107-";
    char string4[100] = " --+-108n6668+";

    printf("%d\n", ft_atoi(string1));
    printf("%d\n", ft_atoi(string2));
    printf("%d\n", ft_atoi(string3));
    printf("%d\n", ft_atoi(string4));

    printf("%d\n", atoi(string1));
    printf("%d\n", atoi(string2));

    return 0;
}