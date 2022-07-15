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
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z' || str[i - 1] >= '0' && str[i - 1] <= '9' || str[i - 1] >= 'a' && str[i - 1] <= 'z')
				i++;
			else
			{
				str[i] = str[i] - 32;
				i++;
				/*while (str[i] >= 'a' && str[i] <= 'z')
					i++;
				/*while (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] = str[i] + 32;
					i++;
				}*/
				//i = 0;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i-1] >= 'A' && str[i - 1] <= 'Z' || str[i - 1] >= '0' && str[i - 1] <= '9' || str[i - 1] >= 'a' && str[i - 1] <= 'z')
			{	
				str[i] = str[i] + 32;
				i++;
			//while (str[i] >= 'a' && str[i] <= 'z') 
			/* car il va continuer que les boucles if d'apres donc si on ne remet pas la condition de
			si on tombe sur une lettre minuscule alors il ne va as repasser sur ce if + meme s'il passait 
			dans la condition il mettrait la premiere minuscule trouvee au milieu du mot en majuscule.*/
				//i++;
			//break;
			//i = 0;
			}
			else
				break;
		}
		/*else if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i]  >= '0' && str[i] <= '9' || str[i]  >= 'a' && str[i] <= 'z')
				i++;
			//i = 0;
		}*/
		else
			i++;
			/*if (str[i] >= 'A' && str[i] <= 'Z')
				i++;*/
			
	}
	return str;
}
