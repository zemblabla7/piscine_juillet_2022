/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:17:16 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/13 17:17:18 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alphanumeric_lowercase(char str[], int *p);
void	ft_alphanumeric_uppercase(char str[], int *p);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	*ptr;

	ptr = &i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_alphanumeric_lowercase(str, ptr);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_alphanumeric_uppercase(str, ptr);
		else
			i++;
	}
	return (str);
}

void	ft_alphanumeric_lowercase(char str[], int *p)
{
	if (str[(*p) - 1] >= 'A' && str[(*p) - 1] <= 'Z')
		(*p)++;
	else if (str[(*p) - 1] >= '0' && str[(*p) - 1] <= '9')
		(*p)++;
	else if (str[(*p) - 1] >= 'a' && str[(*p) - 1] <= 'z')
		(*p)++;
	else
	{
			str[(*p)] = str[(*p)] - 32;
			(*p)++;
	}
}

void	ft_alphanumeric_uppercase(char str[], int *p)
{
	if (str[(*p) - 1] >= 'A' && str[(*p) - 1] <= 'Z')
	{
		str[(*p)] = str[(*p)] + 32;
		(*p)++;
	}
	else if (str[(*p) - 1] >= '0' && str[(*p) - 1] <= '9')
	{
		str[(*p)] = str[(*p)] + 32;
		(*p)++;
	}
	else if (str[(*p) - 1] >= 'a' && str[(*p) - 1] <= 'z')
	{
		str[(*p)] = str[(*p)] + 32;
		(*p)++;
	}
	else
			(*p)++;
}
