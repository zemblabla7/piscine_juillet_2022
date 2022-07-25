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
#include <stdio.h>

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

void    ft_swap(char *origin1, char *origin2, char *argv1, char *argv2)
{
    int     a;
    int     b;

    a = 0;
    b = 0;
    while (origin1[b] || origin2[a])
    {
        argv1[a] = origin2[a];
        argv2[b] = origin1[b];
        a++;
        b++;
    }
    //printf("ft_swap"); // EFFACER
    ft_putstr(argv2);
}

void    ft_save_str(char *argv1, char *argv2)
{
    char    *origin1;
    char    *origin2;
    int     a;
    
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
    //printf("ft_save_str"); // EFFACER
    ft_swap(origin1, origin2, argv1, argv2);
}

int main (int argc, char **argv)
{
    int     i;
    int     j;

    i = 1;
    if (argc == 2)
        ft_putstr(argv[1]);
	if (argc > 2)
    {
        while (i + 1 < argc)
        {
            //printf("ouais"); //EFFACER
            j = 0;
            while (argv[i][j] || argv[i + 1][j])
            {
                if (argv[i][j] != argv[i + 1][j])
                {
                    if (argv[i][j] > argv[i + 1][j])
                    {
                        //printf("condition 1"); // EFFACER
                        ft_save_str(argv[i], argv[i + 1]);
                    }
                    if (argv[i][j] < argv[i + 1][j])
                    {
                        //printf("condition 2"); // EFFACER
                        ft_putstr(argv[i]);
                    }
                }
                //printf("avant j++"); // EFFACER
                j++;
            }
            //printf("avant i++"); // EFFACER
            i++;
        }
    }
	return (0);
}