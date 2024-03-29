/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:24:59 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/16 11:25:01 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // pour malloc

int main (int argc, char **argv)
{
	// atoi(argv[])
	int		i;
	char    tab[i][i];

	tab = malloc(argc);
	i = -1; // car on incremente des qu'on entre dans la boucle donc sinon on commencerai par i = 1.
	while (i*i <= argc) // car un tableau ne marche que si il a le meme nombre de cases en ligne que en colonne donc on check
	{
		i++;
		if (i*i == argc && argc < 37) // si on a autant de cases que d'arguments tout va bien. Tab de max 9 X 9 donc max 36 arguments
			break;
		else // sinon erreur
			write(1, "ERROR", 5);
	}

	j = 1;
	while (j < argc) /* argv prend en compte les espaces!! Le deuxieme argument (donc argv[1]) compte comme une longue string. D'ou pourquoi il faut un if.
	comme une seule longue string. Donc on rajoute un if. */
		if (j >= '0' && j <= '9')
		{
			ft_set_outline(tab, argc, argv[j], i);
			j++;
		}
	free(tab);
	return 0;
}