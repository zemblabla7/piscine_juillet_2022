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

char    ft_swap(int argc, char *argv1, char *argv2)
{
    int     i;
    char    *origin1;
    char    *origin2;
    int     a;
    int     b;

    i = 1;
    while (argv1[i] || argv2[i])
    {
        if (argv1[i] != argv2[i])
        {
            if (argv1[i] > argv2[i])
            {
                a = 0;
                while (argv1[a])
                {
                    origin1[a] = argv1[a];
                    a++;
                }
                a = 0;
                while (argv2[a])
                {
                    origin2[a] = argv2[a];
                    a++;
                }
                a = 0;
                b = 0;
                while (argv1[a] || argv2[b])
                {
                    argv1[a] = origin2[a];
                    argv2[b] = origin1[b];
                    a++;
                    b++;
                }
            }
        }
        i++;
    }
    /*i = 1;
    while (argv[i])
    {   
        ft_rev_params(argv);
        i++;
    }*/ // je ne peux envoyer dans la fonction d'affichage que les argv tries
}

int main (int argc, char **argv)
{
    int     i;

    i = 1;
	if (argc >= 1)
    {
        while (i < argc)
        {
		    ft_swap(argc, argv[i], argv[i+1]);
            i++;
        }
    }
	return (0);
}

// EXO PAS FINI!!!!!!