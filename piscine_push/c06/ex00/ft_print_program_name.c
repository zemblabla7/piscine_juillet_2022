/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:11:42 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/21 12:14:28 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *param)
{
	int	i;

	i = 0;
	while (param[i] != '\0')
	{
		write(1, &param[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
		ft_print_program_name(argv[0]);
	return (0);
}
