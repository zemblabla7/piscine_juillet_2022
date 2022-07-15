/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:49:52 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/08 14:52:52 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	origin_a;
	int	origin_b;
	
	origin_a = *a;
	origin_b = *b;
	*a = origin_a / origin_b;
	*b = origin_a % origin_b;
}


int main ()
{
	int c;
	int d;
	int *a;
	int *b;
	
	c = 14;
	d = 2;
	a = &c;
	b = &d;
printf("Valeur de a avant fonction = %d\n", *a);
printf("Valeur de b avant fonction = %d\n", *b);
	
	ft_ultimate_div_mod(a, b);
printf("Valeur de a apres fonction = %d\n", *a);
printf("Valeur de b apres fonction = %d\n", *b);

	return 0;
}
