/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:18:13 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/21 12:18:16 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_print_params(char *param)
{
	int i;

	i = 0;
	while (param[i] != '\0')
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

    i = 1;
	if (argc >= 1)
    {
        while (i < argc)
        {
		    ft_print_params(argv[i]);
            i++;
        }
    }
	return (0);
}