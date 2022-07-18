/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:57:30 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/18 11:57:32 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(char *str)
{
    int     i;
    int     nb;
    int     negative;

    i = -1;
    nb = 0;
    negative = 0;
    while (str[i])
    {
        i++;
        if (str[i] == '-')
            negative++;
        else if (str[i] >= '0' && str[i] <= '9')
            nb = nb * 10 + str[i] - '0';
        else if (str[i] != ' ' || str[i] != '+' || str[i] != '-' || (str[i] <= '0' && str[i] >= '9'))
            break;
    }
    if (negative % 2 != 0)
        nb = nb * -1;
    return (nb);
}