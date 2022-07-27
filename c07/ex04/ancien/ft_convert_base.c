/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:39:52 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/26 13:39:54 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




 #include <unistd.h>
 #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	is_error_1(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
            return (NULL);
		if (base[i] == '+' || base[i] == '-')
			return (NULL);
		i++;
	}
	return (1);
}

int	is_error_2(char *base)
{
	int	i;
	int	j;

    if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (NULL);
    i = 0;
	while (base[i])
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (NULL);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_nbr(char c, char *base) // on retrouve le nb dans la base donnée 
{
	int	i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	i;
	unsigned int	negative;
	char    *nb;
    unsigned int    n;

	i = 0;
	negative = 0;
	if (is_error_1(base_from) == 1 && is_error_2(base_from) == 1 
    && is_error_1(base_to) == 1 && is_error_2(base_to) == 1)
    {
        while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
                i++;
        while (nbr[i] == '+' || nbr[i] == '-')
        {
            if (nbr[i] == '-')
                negative++;
            i++;
        }
        //if (negative % 2 != 0)
            //nb[0] = "-";

        i = 0;
        n = nbr;
////////
        if (nbr == 0)
			ft_putchar(base_to[ft_nbr(nbr[i], base_from)]);
		if (nbr < 0) // est-ce que c'est pas déjà géré dans if (negative % 2 ...) ?
		{
			ft_putchar('-');
			nbr = nbr * (-1);
		}
		if (nbr < ft_strlen(base_to) && nbr > 0)
			ft_putchar(base_to[ft_nbr(nbr[i], base_from)]);
		if (nbr > ft_strlen(base_to))
		{
			ft_convert_base(n / ft_strlen(base_from), base_from, base_to);
			ft_putchar(base_to[n % ft_strlen(base_from)]);
            // on met le modulo dans char nb?
		}
///////
        while (nb[i])
        {
            return (&nb[i]);
            i++;
        }
    }
    else
        return (NULL);
}
// NB --> INT (consigne)

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
}
