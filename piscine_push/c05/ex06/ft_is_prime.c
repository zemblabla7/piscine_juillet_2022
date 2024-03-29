/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:00:28 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/20 18:00:30 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	long long	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if ((n % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
