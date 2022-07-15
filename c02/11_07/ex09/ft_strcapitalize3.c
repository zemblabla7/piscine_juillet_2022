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

int	ft_after_alphanumeric(char str[], int i);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ft_after_alphanumeric(str, i) == 1)
				i++;
			else
			{
				str[i] = str[i] - 32;
				i++;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (ft_after_alphanumeric(str, i) == 1)
			{	
				str[i] = str[i] + 32;
				i++;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (str);
}

int	ft_after_alphanumeric(char str[], int i)
{
	if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
		return (1);
	else if (str[i - 1] >= '0' && str[i - 1] <= '9')
		return (1);
	else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		return (1);
	else
		return (0);
}
