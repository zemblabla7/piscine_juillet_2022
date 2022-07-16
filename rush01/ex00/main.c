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
	int	i;
	int	j;

	i = -1; // car on incremente des qu'on entre dans la boucle donc sinon on commencerai par i = 1.
	while (i*i <= argc) // car un tableau ne marche que si il a le meme nombre de cases en ligne que en colonne donc on check
	{
		i++;
		if (i*i == argc) // si on a autant de cases que d'arguments tout va bien
			break;
		else // sinon erreur
			write(1, "ERROR", 5);
	}
	j = 0;
	while (j < argc) /*argv prend en compte les espaces!! donc il 
	faut diviser par deux. Le deuxieme argument (donc argv[1]) compte
	comme une seule longue string. Ou juste je rajoute un if (si c'est une 
	valeur numerique) mai du coup faut qd meme diviser argc par deux non?*/
	{
		ft_strcmp(argc, argv[j], i);
		j++;
	}
	return 0;
}
