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

void	ft_putstr(char *param)
{
	int i;

	i = 0;
	while (param[i])
	{
		write(1, &param[i], 1);
		i++;
	}
    write(1, "\n", 1);
    
}

int main (int argc, char **argv)
{
    int     i;
    int     j;
    char    *origin1;
    char    *origin2;
    int     a;
    int     b;

    i = 1;
	if (argc >= 2)
    {
        while (i < argc - 1)
        {
            j = 0;
            while (argv[i][j] || argv[i + 1][j])
            {
                if (argv[i][j] != argv[i + 1][j])
                {
                    if (argv[i][j] > argv[i + 1][j])
                    {
                        a = 0;
                        while (argv[i][a])
                        {
                            origin1[a] = argv[i][a];
                            a++;
                        }
                        a = 0;
                        while (argv[i + 1][a])
                        {
                            origin2[a] = argv[i + 1][a];
                            a++;
                        }
                        a = 0;
                        b = 0;
                        while (argv[i][a] || argv[i + 1][b])
                        {
                            argv[i][a] = origin2[a];
                            argv[i + 1][b] = origin1[b];
                            a++;
                            b++;
                        }
                        ft_putstr(argv[i + 1]);
                        break ;
                    }
                    if (argv[i][j] < argv[i + 1][j])
                    {
                        ft_putstr(argv[i]);
                        break ;
                    }
                }
                j++;
            }
            i++;
        }
        //if (i + 1 == argc)
    }
	return (0);
}