/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:36:28 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/11 15:37:05 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
			while (str[i] >= 'a' && str[i] <= 'z')
				i++;
			while (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
				i++;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{	
			str[i] = str[i] + 32;
				i++;
			while (str[i] >= 'a' && str[i] <= 'z') 
			/* car il va continuer que les boucles if d'apres donc si on ne remet pas la condition de
			si on tombe sur une lettre minuscule alors il ne va as repasser sur ce if + meme s'il passait 
			dans la condition il mettrait la premiere minuscule trouvee au milieu du mot en majuscule.*/
				i++;
			//break;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			while (str[i]  >= '0' && str[i] <= '9' || str[i]  >= 'A' && str[i] <= 'Z' || str[i]  >= 'a' && str[i] <= 'z')
				i++;
		else
			i++;
	}
	return str;
}


// si premiere lettre d'un mot est en majuscule ca doit rester en majuscule!
