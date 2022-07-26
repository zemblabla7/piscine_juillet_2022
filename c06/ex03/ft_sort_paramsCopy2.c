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

char	ft_swap(char **a, char **b)
{	
	char	*c;
	char	*d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
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
        j = 1;
        while (j < argc)
        {
            i = 1;
            while (i < argc - 1)
            {
                if (ft_strcmp(argv[i], argv[i + 1]) > 0)
                    ft_swap(&argv[i], &argv[i + 1]);
                i++;
            }
            j++;
        }
        j = 1;
        while (j <= argc - 1)
        {
            ft_putstr(argv[j]);
            j++;
        }
    }
	return (0);
}