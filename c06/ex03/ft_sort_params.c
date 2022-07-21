/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:12:06 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/21 14:12:08 by casomarr         ###   ########.fr       */
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

char    ft_swap(int argc, char *argv)
{
    int     i;
    int     y;
    char    *origin;

    i = 1;
    while (i < argc)
    {
        y = i + 1;
        while (y < argc)
        {
            if (argv[i] - '0' > argv[i + 1] - '0')
            {
                origin[0]  = argv[i];
                argv[i] = argv[y];
                argv[y] = origin[0];
            }
            y++;
        }
        i++;
    }
    i = 1;
    while (argv[i])
    {   
        ft_rev_params(argv[i]);
        i++;
    }
}

int main (int argc, char **argv)
{
    int     i;

    i = 1;
	if (argc >= 1)
    {
        while (i < argc)
        {
		    ft_swap(argc, argv[i]);
            i++;
        }
    }
	return (0);
}

// EXO PAS FINI!!!!!!