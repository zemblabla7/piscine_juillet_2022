/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:25:56 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/21 12:25:59 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_rev_params(char *param)
{
	int i;

	i = 0;
	while (param[i])
	{
		write(1, &param[i], 1);
		i++;
	}
    write(1, "\n", 1);
    return(*param); // pas sure mais il faut bien return un char
}

int main (int argc, char **argv)
{
    int     i;

    i = argc - 1;
	if (argc > 1)
    {
        while (i >= 1)
        {
		    ft_rev_params(argv[i]);
            i--;
        }
    }
	return (0);
}